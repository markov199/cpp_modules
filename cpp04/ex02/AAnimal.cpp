/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:52:10 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/29 13:45:07 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include"AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Default constructor for AAnimal class called" << std::endl;
}

AAnimal::AAnimal(std::string type):_type(type)
{
    std::cout << "Paramaterised constructor for AAnimal " << _type << " called" << std::endl;

}
AAnimal::AAnimal(AAnimal &copy)
{
    std::cout << "Copy constructor forAAnimal class called" << std::endl;
    _type = copy._type;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
   std::cout << "operator= for AAnimal class called" << std::endl;
	if (_type != rhs._type)
		std::cout << "type different************** one is  " << _type << " and other is " << rhs._type << std::endl; 
	else if (this != &rhs)
		_type = rhs._type;
	return(*this);
}

AAnimal::~AAnimal()
{
    std::cout << "Destructor for AAnimal class called" << std::endl;    
}

std::string AAnimal::getType() const
{
    return (this->_type);
}
