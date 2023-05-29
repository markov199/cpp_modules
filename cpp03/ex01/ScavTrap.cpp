/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:18:36 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/22 07:30:18 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"ScavTrap.hpp"
#include"ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor for " << _name << " called" << std::endl;
	this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout << "ScavTrap " << _name << " is constructed" << std::endl;   
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &rhs)
{
    std::cout << "ScavTrap copy constructor for " << _name << " called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "ScavTrap operator= constructor for " << _name << " called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " is destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	if (_energyPoints > 0 && _hitPoints > 0)
    	std::cout << "ScavTrap "  << _name << " in gatekeeping mode" <<  std::endl;
	else
		std::cout << _name << " out of energy/hitpoints.. Cannot guard!!!" <<std::endl;
}

void ScavTrap::attack(std::string target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ScavTrap " << _name << "attacks " << target << " causing a  damage of " << _attackDamage << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " has no energy to attack" << std::endl;
    }
}

void ScavTrap::printVitals_scav(void)
{
	ClapTrap::printVitals();
}
