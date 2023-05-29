/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:10:36 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/21 13:27:31 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap(void):_name("name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor for " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor for " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &rhs)
{
    std::cout << "ClapTrap copy constructor for " << _name << " called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
}


ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    if (this != &rhs)
    {    
    	std::cout << "ClapTrap operator= for " << _name << " called" << std::endl;
        this->_name = rhs.getName();
        this->_hitPoints = rhs.getHitPoints();
        this->_energyPoints = rhs.getEnergyPoints();
        this->_attackDamage = rhs.getAttackDamage();
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor for " << _name << " called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if ((getEnergyPoints() > 0) && getHitPoints() > 0)
    {
        std::cout << _name << " attacks" << target <<\
        ", causing " << _attackDamage << "points of damage" << std::endl;
        _energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << "has no energy/hit points to attack. Maybe its a good time to talk it out !!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((getEnergyPoints() > 0) && getHitPoints() > 0)
    {
        _hitPoints -= amount;
        std::cout << _name << " has taken a damage of " << amount << std::endl;
    }
    else
        std::cout << "No energy/hit points or hit points. It doesnt matter anymore!!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ((getEnergyPoints() > 0) && getHitPoints() > 0)
    {
        // std::cout << _hitPoints << "   ..." << this->_hitPoints << std::endl;
        _hitPoints += amount;
        _energyPoints--;
        std::cout << _name << " has been repaired! has hit points " << _hitPoints << std::endl;
    }
    else
        std::cout << " Cannot be repaired... too  late for me. We need to change the rules of the game" << std::endl;
}


void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int amount)
{
    this->_hitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
    this->_energyPoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
    this->_attackDamage = amount;
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

int ClapTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(void)const
{
    return (this->_energyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}

void ClapTrap::printVitals(void)
{
    std::cout << "Vitals "  << " Energy Points  " << " Hit Points "<< std::endl;
    std::cout << this->getName() << "           " << this->getEnergyPoints()  << "            " << this->getHitPoints() << std::endl;
    std::cout  << std::endl;
}
