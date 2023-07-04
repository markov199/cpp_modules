/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 07:29:18 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/04 09:52:35 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void ft_title(std::string title)
{
	std::cout << std::endl << "\n\n*********** " << title <<" *********** \n\n" << std::endl << std::endl;
}

int main()
{
    //ShrubberyCreationForm default values --> sign grade = 145, execute grade = 137
    try
    {
        ft_title("when form is not signed");
        Bureaucrat B("Jack", 2);
        AForm *SF = new ShrubberyCreationForm("home");
        B.executeForm(*SF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        ft_title("when grade high enough to sign but low to execute");
        Bureaucrat B("Jack", 140);
        ShrubberyCreationForm SF("home");
        B.signForm(SF);
        B.executeForm(SF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        ft_title("when all requirements are met");
        Bureaucrat B("Jack", 130);
        ShrubberyCreationForm SF("home");
        B.signForm(SF);
        B.executeForm(SF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';

	}
	ft_title("ROBOTOMY");
    std::cout << "RobotomyRequestForm default values --> sign grade = 72, execute grade = 45\n";
    try
    {
       ft_title("when form unsigned");
        Bureaucrat B("Matt", 2);
        RobotomyRequestForm RF("Vaccum");
        B.executeForm(RF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
       ft_title("when grade high enough to sign but  too low to execute");
        Bureaucrat B("Matt", 50);
        RobotomyRequestForm RF("Vaccum");
        B.signForm(RF);
        B.executeForm(RF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	ft_title("PRESIDENTIAL PARDON");
   std::cout <<"PresidentialPardonForm default values --> sign grade = 25, execute grade = 5";
    try
    {
        ft_title("when form is not signed");
        Bureaucrat B("Jack", 10);
        PresidentialPardonForm PF("Prisoner");
        B.executeForm(PF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
   
    try
    {
        ft_title("when grade high enough to sign but low to execute");
        Bureaucrat B("Jack", 10);
        PresidentialPardonForm PF("Prisoner");
        B.signForm(PF);
        B.executeForm(PF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        ft_title("when grade high enough to sign and execute");
        Bureaucrat B("Jack", 3);
        PresidentialPardonForm PF("Prisoner");
        B.signForm(PF);
        B.executeForm(PF);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
 
