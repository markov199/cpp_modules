/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:51:58 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/07 13:44:39 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Zombie.hpp"



Zombie *zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "Error in number of Zombies...please enter positive numbers" << std::endl;
		return (NULL);
	}
	Zombie *hordeOfZombies = new(std::nothrow) Zombie[N];
	for (int i = 0; i < N; i++)
	{
		hordeOfZombies[i].setName(name);
	}
	return (hordeOfZombies);
}
