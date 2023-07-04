/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:08:48 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/04 14:15:58 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::cout << " LOUD DRRRRRRILLLLING NOISES" << std::endl;
	srand(time(0));
	if (rand() % 2)
		std::cout << " Robotomy request failed" << std::endl;
	else
		std::cout << " Success !! Robotised" << std::endl;	
}


