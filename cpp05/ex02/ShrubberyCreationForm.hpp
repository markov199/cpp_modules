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

#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include<iostream>
#include<string>
#include<stdexcept>
#include"Bureaucrat.hpp"
#include"AForm.hpp"


class Bureaucrat;

class ShrubberyCreationForm: public AFORM
{
	private:
		const std::string  _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExec;
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name, int signGrade, int execGrade);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
		virtual void execute(Bureaucrat const &executor) const;
};

// std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm *form);
// static void checkGrades(int grade);

#endif