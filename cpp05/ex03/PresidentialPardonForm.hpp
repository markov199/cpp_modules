#ifndef PRESEDENTIALPARDONFORM_HPP
#define PRESEDENTIALPARDONFORM_HPP

#include<iostream>
#include<string>
#include<stdexcept>
#include"Bureaucrat.hpp"
#include"AForm.hpp"


class Bureaucrat;

class PresidentialPardonForm: public AForm
{
	private:
		PresidentialPardonForm();
	
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		// PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
		void execute(Bureaucrat const &executor);
};

// std::ostream &operator<<(std::ostream &os, PresidentialPardonForm *form);
// static void checkGrades(int grade);

#endif