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

#include"Bureaucrat.hpp"
#include"Form.hpp"

void ft_title(std::string title)
{
	std::cout << std::endl << "*********** " << title <<" *********** " << std::endl << std::endl;
}
 
int main(void)
{
	ft_title("Form grade too low");
	try
	{
		Form form1("f1", 200, 100);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ft_title("Form grade too high");

	try
	{
		Form form1("f1", 0, 100);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	ft_title("Sign form");
	try
	{
		Bureaucrat b2("b2", 5);
		Form form1("f1",20, 10);
		b2.signForm(form1);
	}
	catch (std::exception &e)
	{

		std::cout << e.what() << std::endl;
	}

	ft_title("Form already signed");
	try
	{
		Bureaucrat bcrat2("b2", 10);
		Bureaucrat bcrat3("b3", 10);
		Bureaucrat bcrat4("b4", 100);
		Form form2("f2", 20, 100);
		bcrat2.signForm(form2);
		bcrat4.signForm(form2);
	}
	catch(std::exception &e)
	{

		std::cout << e.what() << std::endl;
	}	
}
