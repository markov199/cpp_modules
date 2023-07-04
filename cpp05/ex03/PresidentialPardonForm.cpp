#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("Presidential Pardon", target, 25, 5)
{}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):AForm("Presidential Pardon", copy.getTarget(), 25, 5)
{

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->canExecute(executor);
	{
		std::cout << this->getTarget() << " Pardonded by Zaphod Beeblebrox!! " << std::endl;
	}
}
