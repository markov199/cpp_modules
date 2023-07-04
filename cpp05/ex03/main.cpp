/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 07:29:18 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/04 14:34:45 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<cstddef>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include"Intern.hpp"
#include "AForm.hpp"

void title(std::string title)
{
	std::cout << "\n\n     ******************* " << title << " *********************\n\n";
}

int main()
{
    Intern  someRandomIntern;
    AForm   *form1, *form2, *form3;
    Bureaucrat B("Jack", 4);
	
	try
	{
		title("Robotomy Request");
		form1 = someRandomIntern.makeForm("Robotomy Request", "vacuum");
		if (form1)
		{
			std::cout << form1 <<std::endl;
			B.signForm(*form1);
			B.executeForm(*form1);
			delete form1; 
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
    try
	{
		title("Shrubberry Creation");

		form2 = someRandomIntern.makeForm("Shrubberry Creation", "home");
		std::cout << form2 <<std::endl;
		B.signForm(*form2);
		B.executeForm(*form2);
		delete form2; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		title("Presidential Pardon");

		form3 = someRandomIntern.makeForm("Presidential Pardon", "road runner");
		std::cout << form3 <<std::endl;
		B.signForm(*form3);
		B.executeForm(*form3);
		delete form3; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}   
    return (0);
}