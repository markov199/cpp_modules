/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:52:47 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/23 12:14:32 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"

Dog::Dog():Animal("Dog")
{
    std::cout << "Default Constructor for Dog class called" << std::endl;
	// _type = "Dog";
}

Dog::Dog(Dog &copy)
{
    std::cout << "Copy Constructor for Dog class called" << std::endl;
	 _type = copy._type;
}

Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Operator= for Dog class called" << std::endl;
	if(this != &rhs)
	{
		_type = rhs._type;
	}
	return(*this);
}

Dog::~Dog()
{
    std::cout << "Destructor for Dog class called" << std::endl;
}

void Dog::makeSound()const
{
    std::cout << "Woof Woof" << std::endl;
}