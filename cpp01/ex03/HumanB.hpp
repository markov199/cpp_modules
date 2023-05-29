/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:56:34 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/06 08:33:11 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP
#include<iostream>
#include"Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;

	public:
	HumanB(std::string name);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon &weapon);
};
#endif