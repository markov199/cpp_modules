/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:56:20 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/21 12:32:48 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Bureaucrat::Bureaucrat():_name("nameless"), _grade(150){}

Bureaucrat::Bureaucrat(std::strng name):_name(name), _grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
	if (grade > 150)
		throw (this->GradeTooHighException());
	if (grade < 1)
		throw (this->GradeTooLowException())
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

std::ostream &operator<<(std::ostream &os, Bureaucrat const&rhs)
{
	os << rhs._name << ", bureaucrat grade " << rhs._grade;
	return (os);
}

char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low ");
}