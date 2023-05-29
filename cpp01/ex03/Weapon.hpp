/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:19:30 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/07 10:55:36 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
#define WEAPON_H

#include<iostream>
class Weapon
{
	private:
		std::string type;

	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		const std::string &getType(void);
		void setType(std::string newtype);
};
#endif