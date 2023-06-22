/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 08:13:18 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/22 13:44:38 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include<iostream>
#include<string>
#include<stdexcept>
#include"Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:

		const std::string  _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExec;
	
	public:
		AForm();
		AForm(std::string name, int signGrade, int execGrade);
		virtual ~AForm();
		AForm(const AForm &copy);
		AForm &operator=(const AForm &rhs);

		std::string getName() const;
		bool getIsSigned();
		int getGradeToSign() const;
		int getGradeToExec() const;

		class GradeTooHighException: public std::exception
		{
			public:
				const char *what () const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw();
		};

		class FormAlreadySignedException: public std::exception
		{
			public:
				const char *what () const throw();
		};

		void beSigned(Bureaucrat *bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, AForm *form);
static void checkGrades(int grade);

#endif