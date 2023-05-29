/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:31:38 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/06 15:04:05 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>

class Zombie
{
	private:
		std::string name;
		
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void setName(std::string name);
		void announce(void);
};

Zombie * zombieHorde(int N, std::string name);

#endif