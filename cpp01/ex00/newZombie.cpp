/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:00:17 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/07 10:00:49 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *Zombie_new = new Zombie(name);

	return (Zombie_new);
}