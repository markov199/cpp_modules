/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:02:35 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/22 14:30:52 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("Shrubberry Creation", target, 145, 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):_name(copy.getName()), _isSigned(0), _gradeToSign(copy.getGradeToSign()), _gradeToExec(copy.getGradeToExec())
// {

// }

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (this->canExecute(executor) == 1)
	{
		//open file to plant an ascii tree
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