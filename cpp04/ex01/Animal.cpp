/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:52:10 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/29 13:26:14 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include"Animal.hpp"

Animal::Animal():_type("ANIMAL")
{
    std::cout << "Default constructor for Animal class called" << std::endl;
}

Animal::Animal(std::string type):_type(type)
{
    std::cout << "Paramaterised constructor for Animal " << _type << " called" << std::endl;
}

Animal::Animal(Animal &copy)
{
    std::cout << "Copy constructor for Animal class called" << std::endl;
   	 _type = copy._type;
}

Animal &Animal::operator=(const Animal &rhs)
{
    std::cout << "operator= for Animal class called" << std::endl;
	if (_type != rhs._type)
		std::cout << "type different************** one is  " << _type << " and other is " << rhs._type << std::endl; 
	else if (this != &rhs)
		_type = rhs._type;
	return(*this);
}

Animal::~Animal()
{
    std::cout << "Destructor for Animal class called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}

void Animal::makeSound()const
{
    std::cout << "Animal sound" << std::endl;
}
