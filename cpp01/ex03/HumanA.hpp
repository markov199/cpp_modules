/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:33:50 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/06 08:01:36 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include<iostream>
#include"Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;

	public:
	HumanA(std::string name, Weapon &weapon);
	
	~HumanA();
	void attack(void);
};
#endif