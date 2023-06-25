#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include<iostream>
#include<string>
#include<stdexcept>
#include"Bureaucrat.hpp"
#include"AForm.hpp"


class Bureaucrat;

class RobotomyRequestForm: public AForm
{
	private:
		RobotomyRequestForm();
	
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		// RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
		void execute(Bureaucrat const &executor);
};

// std::ostream &operator<<(std::ostream &os, RobotomyRequestForm *form);
// static void checkGrades(int grade);

#endif