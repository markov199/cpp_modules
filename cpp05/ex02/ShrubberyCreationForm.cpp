/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:02:35 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/26 15:07:40 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fstream>
#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"



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

	if (this->canExecute(executor) == 1)
	{
		fs.open(this->getTarget() + "_shruberry", std::fstream::out | std::fstream::trunc);
		if (!fs.good())
			std::cerr << "Failed to open file" << std::endl;
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
	}
	


// std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm *form)
// {
// 	os << std::boolalpha
// 	<< "Form Name :       " << form->getName() << std::endl
// 	<< "Grade to sign :   " << form->getGradeToSign() << std::endl
// 	<< "Grade to execute: " << form->getGradeToExec() << std::endl
// 	<< "Form signed       " << form->getIsSigned() << std::endl;
// 	return (os);
// }