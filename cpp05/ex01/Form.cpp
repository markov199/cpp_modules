/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 08:46:28 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/21 09:08:19 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"


Form::Form():_name(nameless), _isSigned(0), _gradeToExec(0), _gradeToSign(0){}


Form::Form(std::string name, int signGrade, int signGrade):_name(name), _isSigned(0), _gradeToSign(signGrade), _gradeToExec(signGrade){}

~Form(){}

std::string Form::getName()
{
	return (this->_name);
}

bool Form::getIsSigned()
{
	return (this->_isSigned);
}

int Form::getGradeToSign()
{
	return (this->_gradeToSign);
}

int Form::getGradeToExec()
{
	return (this->_gradeToExec);
}

void Form::beSigned(Bureaucrat *bureaucrat)
{
	if (!(this->_isSigned))
	{
		if (bureaucrat->getGrade <= this->getGradeToSign)
			this->_isSigned = 1;
			//throw exception
	}
}

std::ostream &operator<<(Form *form)
{
	std::cout << "Form Name :       " << this->getName << std::endl;
	std::cout << "Grade to sign :   " << this->_gradeToSign << std::endl;
	std::cout << "Grade to execute: " << this->_gradeToExec << std::endl;
}