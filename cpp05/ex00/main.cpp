/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 07:29:18 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/22 12:26:20 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


void ft_title(std::string title)
{
	std::cout << std::endl << "*********** " << title <<" *********** " << std::endl << std::endl;
}
 
int main(void)
{
	ft_title("A  few bureaucrats");
	try
	{
		Bureaucrat bcrat2("b2", 10);
		std::cout << bcrat2 << std::endl;
		Bureaucrat bcrat3("b3", 100);
		std::cout << bcrat3 << std::endl;
		Bureaucrat bcrat4("b4", 30);
		std::cout << bcrat4 << std::endl;		
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ft_title("Grade too low");
	try
	{
		Bureaucrat bcrat2("b2", 60);
		std::cout << bcrat2 << std::endl;		
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ft_title("Grade too high");
	try
	{
		Bureaucrat bcrat2("b2", 0);
		std::cout << bcrat2 << std::endl;		
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ft_title("Incrementing grade & Grade too high");
	try
	{
		Bureaucrat bcrat2("b2", 10);
		bcrat2.incrementGrade();
		std::cout << bcrat2 << std::endl;		
		Bureaucrat bcrat3("b3", 1);
		bcrat3.incrementGrade();
		std::cout << bcrat2 << std::endl;		
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ft_title("decrementing grade & Grade toolow");
	try
	{
		Bureaucrat bcrat2("b2", 140);
		bcrat2.decrementGrade();
		std::cout << bcrat2 << std::endl;		
		Bureaucrat bcrat3("b3", 150);
		bcrat3.decrementGrade();
		std::cout << bcrat2 << std::endl;		
		
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
