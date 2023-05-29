/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 08:59:37 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/07 11:32:00 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Zombie.hpp"

int main()
{
	
	Zombie Zombie1;
	Zombie *Zomb2;

	
	Zombie1.announce();
	Zomb2 = newZombie("Zomb1");
	Zomb2->announce();
	randomChump("zomb22");
	delete Zomb2;
	return (0);
}
