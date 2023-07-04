/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:30:32 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/04 14:34:21 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Intern.hpp"

const std::string formName[3] = {"Shrubberry Creation", "Robotomy Request", "Presidential Pardon"};

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern &Intern::operator=(const Intern &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

AForm *makeShrubberyCreationForm(std::string target)
{
	return(new ShrubberyCreationForm(target));
}

AForm *makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *(*pfn[3])(std::string)  = {&makeShrubberyCreationForm, &makeRobotomyRequestForm, &makePresidentialPardonForm, };

AForm *Intern::makeForm(std::string form, std::string target)
{
	try
	{
		for(int i = 0; i < 3; i++)
		{
			std::cout << form <<std::endl << formName[i] << std::endl;
			if (form.compare(formName[i]) == 0)
			{
				std::cout << formName[i] << " created\n";
				return((pfn[i])(target));
			}
			if (i == 2)
				throw (Intern::FormMakerNotFoundException());
		}
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (NULL);
}

const char *Intern::FormMakerNotFoundException::what() const throw()
{
	return (" Sorry couldnt make the form");
}