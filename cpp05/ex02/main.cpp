/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 07:29:18 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/26 14:34:51 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void ft_title(std::string title)
{
	std::cout << std::endl << "*********** " << title <<" *********** " << std::endl << std::endl;
}
 
int main(void)
{
	ft_title("Form grade too low");
	ShrubberyCreationForm S1("park");
	Bureaucrat b1("b1", 5);
	b1.signForm(S1);
	b1.executeForm(S1);
	
	

	// ft_title("Form already signed");
	// try
	// {
	// 	Bureaucrat bcrat2("b2", 10);
	// 	Bureaucrat bcrat3("b3", 10);
	// 	Bureaucrat bcrat4("b4", 100);
	// 	// AForm form2("f2","" 20, 100);
	// 	// bcrat2.signForm(form2);
	// 	// bcrat4.signForm(form2);
	// }
	// catch(std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }	
}