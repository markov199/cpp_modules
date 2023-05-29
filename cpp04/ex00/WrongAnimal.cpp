/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:24:11 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/23 12:25:15 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor for WrongAnimal class called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):_type(type)
{
    std::cout << "Paramaterised constructor for WrongAnimal " << _type << " called" << std::endl;

}
WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    std::cout << "Copy constructor for WrongAnimal class called" << std::endl;
    _type = copy._type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    std::cout << "operator= for WrongAnimal class called" << std::endl;
	if(this != &rhs)
	{
		_type = rhs._type;
	}
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor for WrongAnimal class called" << std::endl;    
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "kgjdfhgugndfbvi" << std::endl;
}
