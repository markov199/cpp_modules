#include<ctime>
#include<cstdlib>
#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("Robotomy Request", target, 72, 45)
{}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):AForm("Robotomy Request", copy.getTarget(), 72, 45)
{

}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->canExecute(executor);
	{
		
		std::cout << " LOUD DRRRRRRILLLLING NOISES" << std::endl;
		srand(time(0));
		int i = rand();		
		if (i  % 2)
		{
			std::cout << " Robotomy request failed  i = " << i << std::endl;

		}
		else
			std::cout << " Success !! Robotised  i = "<< i << std::endl;
	}	
}
