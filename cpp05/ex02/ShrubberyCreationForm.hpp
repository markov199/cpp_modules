/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:03:04 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/22 14:30:04 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include<iostream>
#include<string>
#include<stdexcept>
#include"Bureaucrat.hpp"
#include"AForm.hpp"


class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
	private:
		ShrubberyCreationForm();
	
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		// ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
		void execute(Bureaucrat const &executor);
};

// std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm *form);
// static void checkGrades(int grade);

#endif