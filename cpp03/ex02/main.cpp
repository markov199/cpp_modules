/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:37:53 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/22 07:33:31 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
// #include"ClapTrap.hpp"
#include"FragTrap.hpp"

int main (void)
{
    FragTrap c1("frag1");
    FragTrap c2(c1);
    c2.setName("frag2");
	FragTrap c3;
	c3 = c2;
    c3.setName("frag3");
	std::cout << c2.getName() << " new name " << std::endl;
	std::cout << c3.getName() << " new name " << std::endl;
	std::cout <<" ============================== " << std::endl;
    c1.printVitals();
    c2.printVitals();
	c3.printVitals();
    
    c2.attack("frag1");
    c1.takeDamage(5);
    c1.beRepaired(15);

    c3.highFighGuys();
    c1.printVitals();
    c2.printVitals();
	c3.printVitals();

}