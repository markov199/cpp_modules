/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:27:24 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/21 13:37:25 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"ScavTrap.hpp"
#include"ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Default constructor for ScavTrap " << _name << " is called" << std::endl;   
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << _name << " is constructed" << std::endl;   
}

ScavTrap::ScavTrap(ScavTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
    std::cout << "ScavTrap copy constructor for " << _name << " called" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
    std::cout << "ScavTrap operator= constructor for " << _name << " called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " is destroyed" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap in gatekeeping mode" <<  std::endl;
}

void ScavTrap::attack(std::string target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " has no energy to attack" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap attacks " << target << " causing a  damage of " << _attackDamage << std::endl;
    }
}
