/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:56:20 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/28 14:50:42 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Bureaucrat.hpp"



Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
	if (grade > LOWEST_GRADE)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < HIGHEST_GRADE)
		throw (Bureaucrat::GradeTooHighException());
	_grade = grade;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):_name(copy._name), _grade(copy._grade)
{}

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


std::ostream &operator<<(std::ostream &os, Bureaucrat const&rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (os);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat Grade too high: Highest grade allowed is 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Grade too low: Lowest grade allowed is 150");
}
