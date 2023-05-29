/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 08:59:24 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/01 09:02:00 by mkovoor          ###   ########.fr       */
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
	void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif