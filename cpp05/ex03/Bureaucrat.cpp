/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:56:20 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/26 13:44:12 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Bureaucrat.hpp"
#include"AForm.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
	if (grade > LOWEST_GRADE)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < HIGHEST_GRADE)
		throw (Bureaucrat::GradeTooHighException());
	_grade = grade;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):_name(copy._name), _grade(copy._grade){}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int		Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if ((this->_grade - 1) < HIGHEST_GRADE)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if ((this->_grade + 1) > LOWEST_GRADE)
		throw(Bureaucrat::GradeTooLowException());
	this->_grade++;
}

void  Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(this);
		std::cout << this->getName() << " signed " << form.getName() <<std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
			std::cout << this->getName() << " executed " << form.getName() <<std::endl;		
	}
	catch(std::exception &e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const&rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (os);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Grade too low");
}
