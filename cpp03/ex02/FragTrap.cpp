/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:18:43 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/21 13:29:37 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"FragTrap.hpp"
#include"ClapTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default constructor for" << _name << " called " << std::endl;
	this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << _name << " is constructed" << std::endl;   
}

FragTrap::FragTrap(FragTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
    std::cout << "FragTrap copy constructor for " << _name << " called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
    std::cout << "FragTrap operator= constructor for " << _name << " called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " is destroyed" << std::endl;
}

void FragTrap::attack(std::string target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " has no energy to attack" << std::endl;
    }
    else
    {
        std::cout << "FragTrap "<< _name << " attacks " << target << " causing a  damage of " << _attackDamage << std::endl;
    }
}

void FragTrap::highFighGuys(void)
{
    std::cout << "Give Fragtrap " << _name << " a high five !!! " << std::endl;
}
