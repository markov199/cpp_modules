/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:52:29 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/23 12:14:22 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Cat.hpp"

Cat::Cat():Animal("Cat")
{
    std::cout << "Default Constructor for Cat class called" << std::endl;
}

Cat::Cat(Cat &copy)
{
    std::cout << "Copy Constructor for Cat class called" << std::endl;
	 _type = copy._type;
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Operator= for Cat class called" << std::endl;
	if(this != &rhs)
	{
		_type = rhs._type;
	}
	return(*this);
}

Cat::~Cat()
{
    std::cout << "Destructor for Cat class called" << std::endl;
}

void Cat::makeSound()const
{
    std::cout << "Meow Meow" << std::endl;
}