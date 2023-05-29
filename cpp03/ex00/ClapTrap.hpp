/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:35:36 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/21 12:35:42 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include<iostream>

class ClapTrap
{
private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(ClapTrap &rhs);
    ClapTrap &operator=(const ClapTrap &rhs);

    void setName(std::string name);
    void setHitPoints(unsigned int amount);
    void setEnergyPoints(unsigned int amount);
    void setAttackDamage(unsigned int amount);

    std::string getName(void) const;
    int getHitPoints(void) const;
    int getEnergyPoints(void)const;
    int getAttackDamage(void) const;

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

void printVitals(ClapTrap &clap);

#endif
