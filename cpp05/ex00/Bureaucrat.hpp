/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:34:43 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/28 14:23:47 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>
#include<string>
#include<stdexcept>

#define LOWEST_GRADE 150
#define HIGHEST_GRADE 1

class Form;

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
