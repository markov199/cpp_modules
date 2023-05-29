/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 08:59:30 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/07 10:01:04 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Zombie.hpp"

Zombie::Zombie()
{
	std::string name;

	std::cout << "Enter the name of your zombie" << std::endl;
	std::cin >> name;
	this->name = name;

}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": DestrrroyeD" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}
