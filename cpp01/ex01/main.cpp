/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:31:19 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/08 07:58:59 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Zombie.hpp"

int main()
{
	Zombie *hordeOfZombies;
	int N;
	
	N = 6;	
	hordeOfZombies = zombieHorde(N, "ZOMZOM");
	if (hordeOfZombies != NULL)
	{
		for(int i = 0; i < N; i++)
			hordeOfZombies[i].announce();
		delete[] hordeOfZombies;
	}
	return (0);
}