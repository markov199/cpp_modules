#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("Shrubberry Creation", target, 145, 137)
{}

RobotomyRequestForm::~RobotomyRequestForm(){}

// RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):_name(copy.getName()), _isSigned(0), _gradeToSign(copy.getGradeToSign()), _gradeToExec(copy.getGradeToExec())
// {

// }

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	if (this->canExecute(executor) == 1)
	{
		//ROBOTOMISE
	}
	
}

// std::ostream &operator<<(std::ostream &os, RobotomyRequestForm *form)
// {
// 	os << std::boolalpha
// 	<< "Form Name :       " << form->getName() << std::endl
// 	<< "Grade to sign :   " << form->getGradeToSign() << std::endl
// 	<< "Grade to execute: " << form->getGradeToExec() << std::endl
// 	<< "Form signed       " << form->getIsSigned() << std::endl;
// 	return (os);
// }