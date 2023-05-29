/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:34:46 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/21 13:31:26 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main (void)
{
    ScavTrap c1("scav1");
    ScavTrap c2(c1);
    c2.setName("scav2");
	ScavTrap c3;
	c3 = c2;
    c3.setName("scav3");
	std::cout << c2.getName() << " new name " << std::endl;
	std::cout << c3.getName() << " new name " << std::endl;
	std::cout <<" ============================== " << std::endl;
    c1.printVitals_scav();
    c2.printVitals_scav();
	c3.printVitals_scav();
    
	c2.guardGate();
    c2.attack("scav1");
    c1.takeDamage(5);
    c1.beRepaired(15);

    c3.takeDamage(5);
    c3.takeDamage(5);
    c1.printVitals_scav();
    c2.printVitals_scav();
	c3.printVitals_scav();

}



