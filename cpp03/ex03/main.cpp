/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:55:12 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/22 07:36:52 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"ClapTrap.hpp"
#include"FragTrap.hpp"
#include"DiamondTrap.hpp"

int main (void)
{
    DiamondTrap c1("diamnd1");
    // c1.setName("diamnd11");
    DiamondTrap c2(c1);
    c2.setName("diamnd2");
	DiamondTrap c3;
	c3 = c2;
    c3.setName("diamnd3");
	std::cout << c2.getName() << " new name " << std::endl;
	std::cout << c3.getName() << " new name " << std::endl;
	std::cout <<" ============================== " << std::endl;
    c1.printVitals();
    c2.printVitals();
	c3.printVitals();
    
    c2.attack("diamnd1");
    c1.takeDamage(5);
    c1.beRepaired(15);

    c3.takeDamage(5);
    c3.takeDamage(5);
    c1.printVitals();
    c2.printVitals();
	c3.printVitals();
	c1.whoAmI();
	c2.whoAmI();
	c3.whoAmI();

}