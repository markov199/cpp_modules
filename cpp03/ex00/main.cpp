/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:35:47 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/22 07:23:09 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"ClapTrap.hpp"

int main (void)
{
    ClapTrap c1("clap1");
    ClapTrap c2(c1);
    c2.setName("clap2");
    ClapTrap c3("clap3");
	ClapTrap c4;
	c4 = c2;
    
    printVitals(c1);
    printVitals(c2);
    printVitals(c3);

    c2.attack("clap3");
    c3.takeDamage(5);
    c3.beRepaired(15);
    c3.takeDamage(5);
    c3.takeDamage(5);

    printVitals(c1);
    printVitals(c2);
    printVitals(c3);
}


