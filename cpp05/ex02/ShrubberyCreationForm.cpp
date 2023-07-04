/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:02:35 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/04 14:58:53 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fstream>
#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include<string>



ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("Shrubberry Creation", target, 145, 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):AForm("Shrubberry Creation", copy.getTarget(), 145, 137)
{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::fstream fs;

	this->canExecute(executor);
	fs.open((this->getTarget() + "_shruberry").c_str(), std::fstream::out | std::fstream::trunc);
	if (!fs.good())
		throw std::runtime_error("could not open file");
	fs <<
	"              * *\n"
	"      *    *  *\n"
	"    *  *    *     *  *\n"
	"  *     *    *  *    *\n"
	" * *   *    *    *    *   *\n"
	" *     *  *    * * .#  *   *\n"
	" *   *     * #.  .# *   *\n"
	"  *     \"#.  #: #\" * *    *\n"
	" *   * * \"#. ##\"       *\n"
	"   *       \"###\n"
	"             \"##\n"
	"              ##.\n"
	"              .##:\n"
	"              :###\n"
	"              ;###\n"
	"            ,####.\n";

	fs.close();		 
}
	