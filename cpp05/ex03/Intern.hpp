/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:10:49 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/28 12:41:47 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include<iostream>
#include<stdexcept>
#include<string>
#include"AForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

class Intern
{
	private:
		// AForm *makeShrubberyCreationForm(std::string target);
		// AForm *makeRobotomyRequestForm(std::string target);
		// AForm *makePresidentialPardonForm(std::string target);
	public:
		Intern();
		~Intern();
		Intern(Intern const &copy);
		Intern &operator=(const Intern &rhs);
		AForm *makeForm(std::string form, std::string target);

		class FormMakerNotFoundException: public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif