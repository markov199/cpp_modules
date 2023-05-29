/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:25:47 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/23 12:26:54 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
    std::cout << "Default Constructor for WrongCat class called" << std::endl;
}

WrongCat::WrongCat(WrongCat &copy)
{
    std::cout << "Copy Constructor for WrongCat class called" << std::endl;
	 _type = copy._type;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "Operator= for WrongCat class called" << std::endl;
	if(this != &rhs)
	{
		_type = rhs._type;
	}
	return(*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor for WrongCat class called" << std::endl;
}

void WrongCat::makeSound()const
{
    std::cout << "Puuur Meow" << std::endl;
}