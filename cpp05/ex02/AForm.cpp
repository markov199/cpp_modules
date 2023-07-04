/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 08:46:28 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/28 15:20:35 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"
#include"Bureaucrat.hpp"

static void checkGrade(int grade)
{
	if (grade >LOWEST_GRADE)
		throw (AForm::GradeTooLowException());
	if(grade < HIGHEST_GRADE)
		throw (AForm::GradeTooHighException());
}

AForm::AForm():_name("nameless"), _target("no target"), _isSigned(0),  _gradeToSign(0), _gradeToExec(0){}


AForm::AForm(std::string name, std::string target, int signGrade, int ExecGrade):_name(name), _target(target), _isSigned(0), _gradeToSign(signGrade), _gradeToExec(ExecGrade)
{
	checkGrade(signGrade);
	checkGrade(ExecGrade);
}

AForm::~AForm(){}

std::string AForm::getName() const
{
	return (this->_name);
}

AForm::AForm(const AForm &copy):_name(copy.getName()), _isSigned(0), _gradeToSign(copy.getGradeToSign()), _gradeToExec(copy.getGradeToExec())
{

}

AForm	&AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

bool AForm::getIsSigned()
{
	return (this->_isSigned);
}

int AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int AForm::getGradeToExec() const
{
	return (this->_gradeToExec);
}

std::string AForm::getTarget() const
{
	return (this->_target);
}

void AForm::setTarget(std::string target)
{
	this->_target = target;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return (" Form: Grade too high ** Highest grade is 1 Lowest grade is 150");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Form: Grade too low ** Highest grade is 1 Lowest grade is 150");
}

const char *AForm::FormAlreadySignedException::what() const throw()
{
	return ("Form is already signed");
}

const char *AForm::FormUnsignedException::what() const throw()
{
	return ("Form unsigned.");
}

void AForm::beSigned(Bureaucrat *bureaucrat)
{
	if ((this->_isSigned))
		throw (AForm::FormAlreadySignedException());
	if (bureaucrat->getGrade() > this->getGradeToSign())
		throw (Bureaucrat::GradeTooLowException());
	this->_isSigned = 1;
}
bool AForm::canExecute(Bureaucrat const &executor) const
{
	if(!this->_isSigned)
		throw(AForm::FormUnsignedException());
	if (executor.getGrade() > this->_gradeToExec)
		throw (Bureaucrat::GradeTooLowException());
	return (1);
}

std::ostream &operator<<(std::ostream &os, AForm *form)
{
	os << std::boolalpha
	<< "Form Name :       " << form->getName() << std::endl
	<< "Grade to sign :   " << form->getGradeToSign() << std::endl
	<< "Grade to execute: " << form->getGradeToExec() << std::endl
	<< "Form signed       " << form->getIsSigned() << std::endl;
	return (os);
}