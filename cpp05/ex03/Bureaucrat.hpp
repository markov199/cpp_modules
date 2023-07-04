/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:34:43 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/26 14:28:27 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>
#include<string>
#include<stdexcept>
#include"AForm.hpp"

#define LOWEST_GRADE 150
#define HIGHEST_GRADE 1


class Bureaucrat
{
	private:

		const std::string _name;
		int	_grade;
		Bureaucrat();

	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();		
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		
		std::string getName() const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();
		void signForm(AForm &form);
		void executeForm(AForm const &form);
		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw();				
		};

		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw();				
		};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const&rhs);
#endif
