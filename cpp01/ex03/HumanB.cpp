/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:57:35 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/06 08:50:54 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"HumanB.hpp"
#include"Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB(void)
{

}

void HumanB::attack(void)
{
	if (this->weapon != NULL)
		std::cout << this->name << " attacks with " << this->weapon->getType() <<std::endl;
	else
		std::cout << this->name << " has no weapon to attack" << std::endl;
	return ;

}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
