/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:03:04 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/28 09:48:29 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include<iostream>
#include<string>
#include<stdexcept>
#include"Bureaucrat.hpp"
#include"AForm.hpp"


// class Bureaucrat;
// class Aform;

class ShrubberyCreationForm : public AForm
{
	private:
		ShrubberyCreationForm();
	
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const &executor) const;
};

#endif