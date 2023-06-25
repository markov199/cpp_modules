#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("Shrubberry Creation", target, 145, 137)
{}

PresidentialPardonForm::~PresidentialPardonForm(){}

// PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):_name(copy.getName()), _isSigned(0), _gradeToSign(copy.getGradeToSign()), _gradeToExec(copy.getGradeToExec())
// {

// }

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	if (this->canExecute(executor) == 1)
	{
		//open file to plant an ascii tree
	}
	
}

// std::ostream &operator<<(std::ostream &os, PresidentialPardonForm *form)
// {
// 	os << std::boolalpha
// 	<< "Form Name :       " << form->getName() << std::endl
// 	<< "Grade to sign :   " << form->getGradeToSign() << std::endl
// 	<< "Grade to execute: " << form->getGradeToExec() << std::endl
// 	<< "Form signed       " << form->getIsSigned() << std::endl;
// 	return (os);
// }