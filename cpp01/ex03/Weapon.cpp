/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:26:15 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/07 10:55:27 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::Weapon(void)
{
	
}

Weapon::~Weapon(void)
{

}

const std::string &Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string newtype)
{
	this->type = newtype;
}