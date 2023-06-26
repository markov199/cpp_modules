/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:52:29 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/29 15:25:25 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AAnimal.hpp"
#include"Cat.hpp"
#include"Brain.hpp"

Cat::Cat():AAnimal("Cat")
{
    std::cout << "Default Constructor for Cat class called" << std::endl;
	_myBrain = new Brain();
}

Cat::Cat(Cat &copy):AAnimal("Cat")
{
	{
		std::cout << "Copy Constructor for Cat class called" << std::endl;
		_myBrain = new Brain();
		*_myBrain = *copy._myBrain;
	}    
}

Cat &Cat::operator=(const Cat &rhs)
{
	if ("Cat" == rhs.getType())
	{
		std::cout << "Operator= for Cat class called" << std::endl;
		if(this != &rhs)
		{
			if (_myBrain != NULL)
				delete _myBrain;
			_myBrain = new Brain();
			*_myBrain = *rhs._myBrain;
		}
		return(*this);
	}
	else
	{
		std::cout << "types do not match!!" <<std::endl;
		return (*this);
	}
}

Cat::~Cat()
{
    std::cout << "Destructor for Cat class called" << std::endl;
	if (_myBrain != NULL)
		delete _myBrain;
}

void Cat::makeSound()const
{
    std::cout << "Meow Meow" << std::endl;
}

void Cat::setIdea(std::string idea)
{
	_myBrain->setIdea(idea);
}

void Cat::getIdea(void)
{
	_myBrain->getIdea();
}
