/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 08:13:18 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/28 09:43:07 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include<iostream>
#include<string>
#include<stdexcept>
// #include"Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
	private:

		const std::string  _name;
		std::string _target;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExec;
	
	public:
		AForm();
		AForm(std::string name, std::string target, int signGrade, int execGrade);
		virtual ~AForm();
		AForm(const AForm &copy);
		AForm &operator=(const AForm &rhs);

		std::string getName() const;
		std::string getTarget() const;
		bool getIsSigned();
		int getGradeToSign() const;
		int getGradeToExec() const;

		void beSigned(Bureaucrat *bureaucrat);
		void setTarget(std::string target);
		bool canExecute(Bureaucrat const &executor) const;
		virtual void execute(Bureaucrat const &executor) const = 0;

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
				const char *what() const throw();
		};

		class FormUnsignedException: public  std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, AForm *form);

#endif
