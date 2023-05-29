/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 07:05:23 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/22 07:05:34 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), ScavTrap(), FragTrap()
{
	_name = "name";
    ClapTrap::_name = "name_clap_name";
	_hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "Default constructor for DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) :ClapTrap(), FragTrap(), ScavTrap()
{
    std::cout << "Paramaterized constructor for DiamondTrap called" << std::endl;
	_name = name;
    ClapTrap::_name = name + "_clap_name";
	_hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor for DiamondTrap called" << std::endl; 
}

DiamondTrap::DiamondTrap(DiamondTrap &rhs)
{
    std::cout << "Copy constructor for DiamondTrap called" << std::endl;
    _name = rhs._name;
    this->ClapTrap::_name =  rhs.ClapTrap::_name;
    _hitPoints = rhs.getHitPoints();
    _energyPoints = rhs.getEnergyPoints();
    _attackDamage = rhs.getAttackDamage();
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
    std::cout << "operator= for DiamondTrap called" << std::endl;
	_name = rhs._name;
    this->ClapTrap::_name =  rhs.ClapTrap::_name;
    _hitPoints = rhs.getHitPoints();
    _energyPoints = rhs.getEnergyPoints();
    _attackDamage = rhs.getAttackDamage();
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout <<"I am DiamondTrap  " << _name << " My ClapTrap name is "<< this->ClapTrap::_name << std::endl;

}

void DiamondTrap::setName(std::string name)
{
    _name = name;
    ClapTrap::setName(name + "_clap_name");
}
