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



ShrubberyCreationForm::ShrubberyCreationForm():_name("nameless"), _isSigned(0),  _gradeToSign(0), _gradeToExec(0){}


ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int signGrade, int ExecGrade):_name(name), _isSigned(0), _gradeToSign(signGrade), _gradeToExec(ExecGrade)
{
	checkGrade(signGrade);
	checkGrade(ExecGrade);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):_name(copy.getName()), _isSigned(0), _gradeToSign(copy.getGradeToSign()), _gradeToExec(copy.getGradeToExec())
{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

virtual void execute(Bureaucrat const &executor) const
{
	
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