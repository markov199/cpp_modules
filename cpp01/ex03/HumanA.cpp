/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:19:40 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/06 08:40:08 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"HumanA.hpp"
#include"Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	
}

HumanA::~HumanA()
{
	
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with " << this->weapon.getType() <<std::endl;
	return ;
}