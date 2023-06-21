/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:56:20 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/21 09:03:06 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"

Bureaucrat::Bureaucrat():_name("nameless"), _grade(150){}

Bureaucrat::Bureaucrat(std::strng name):_name(name), _grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
	try 
	{
		(grade > 150)
		//if grede > 150 grade too low exception

	}
	_grade = grade;
}

~Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
	this->_name = copy._name;
	this->_grade = copy._grade;
}

Bureaucrat	&Bureaucrat::operator=(constBureaucrat &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
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

void	Bureaucrat::incrementGrade(int i)
{
	this->_grade -= i;
	// if grade < 1 grade too high exception
}

void	Bureaucrat::decrementGrade(int i)
{
	this->_grade += i;
	//if grede > 150 grade too low exception

}

Bureaucrat::signForm(Form *form)
{
	try
	{
		form->beSigned(this);
		std::cout << this->getName() " signed " << form->getName();
	}
	catch(char *reason)
	{
		std::cout << this->getName() " couldn't sign " form->getName() << " because " << reason << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const&rhs)
{
	os << rhs._name << ", bureaucrat grade " << rhs._grade;
	return (os);
}
