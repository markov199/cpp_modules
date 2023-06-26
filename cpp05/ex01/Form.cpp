/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 08:46:28 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/26 11:50:25 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"
#include"Bureaucrat.hpp"

static void checkGrade(int grade)
{
	if (grade >LOWEST_GRADE)
		throw (Form::GradeTooLowException());
	if(grade < HIGHEST_GRADE)
		throw (Form::GradeTooHighException());
}

Form::Form():_name("nameless"), _isSigned(0),  _gradeToSign(0), _gradeToExec(0){}


Form::Form(std::string name, int signGrade, int ExecGrade):_name(name), _isSigned(0), _gradeToSign(signGrade), _gradeToExec(ExecGrade)
{
	checkGrade(signGrade);
	checkGrade(ExecGrade);
}

Form::~Form(){}

std::string Form::getName() const
{
	return (this->_name);
}
Form::Form(const Form &copy):_name(copy.getName()), _isSigned(0), _gradeToSign(copy.getGradeToSign()), _gradeToExec(copy.getGradeToExec())
{

}

Form	&Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

bool Form::getIsSigned()
{
	return (this->_isSigned);
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExec() const
{
	return (this->_gradeToExec);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return (" Form: Grade too high ** Highest grade is 1 Lowest grade is 150");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form: Grade too low ** Highest grade is 1 Lowest grade is 150");
}

const char *Form::FormAlreadySignedException::what() const throw()
{
	return ("Form is already signed");
}

void Form::beSigned(Bureaucrat *bureaucrat)
{
	if ((this->_isSigned))
		throw (Form::FormAlreadySignedException());
	if (bureaucrat->getGrade() > this->getGradeToSign())
		throw (Bureaucrat::GradeTooLowException());
	this->_isSigned = 1;
}

std::ostream &operator<<(std::ostream &os, Form *form)
{
	os << std::boolalpha
	<< "Form Name :       " << form->getName() << std::endl
	<< "Grade to sign :   " << form->getGradeToSign() << std::endl
	<< "Grade to execute: " << form->getGradeToExec() << std::endl
	<< "Form signed       " << form->getIsSigned() << std::endl;
	return (os);
}
