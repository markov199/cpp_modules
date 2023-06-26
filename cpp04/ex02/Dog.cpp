/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:52:47 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/29 15:26:02 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AAnimal.hpp"
#include"Dog.hpp"
#include"Brain.hpp"

Dog::Dog():AAnimal("Dog")
{
    std::cout << "Default Constructor for Dog class called" << std::endl;
	_myBrain = new Brain();

}

Dog::Dog(Dog &copy):AAnimal("Dog")
{
	std::cout << "Copy Constructor for Dog class called" << std::endl;
		_myBrain = new Brain();
		*_myBrain = *copy._myBrain;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if("Dog" == rhs.getType())
	{
		std::cout << "Operator= for Dog class called" << std::endl;
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

Dog::~Dog()
{
    std::cout << "Destructor for Dog class called" << std::endl;
	if (_myBrain != NULL)
			delete _myBrain;	
}

void Dog::makeSound()const
{
    std::cout << "Woof Woof" << std::endl;
}

void Dog::setIdea(std::string idea)
{
	if (_myBrain->numOfIdeas < 100)
		_myBrain->ideas[_myBrain->numOfIdeas++] = idea;
	else
		std::cout << "Brain full of ideas!!!" << std::endl;
}

void Dog::getIdea(void)
{
	for (int i = 0; i < _myBrain->numOfIdeas; i++)
		std::cout << "Idea [" << i <<"] -- " << _myBrain->ideas[i] <<  std::endl;
}
