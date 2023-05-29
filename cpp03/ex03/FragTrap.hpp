/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 07:06:03 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/22 07:06:07 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include<iostream>
#include"ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
        FragTrap();
        FragTrap(std::string name);
		FragTrap(FragTrap &rhs);
		FragTrap &operator=(const FragTrap &rhs);
        ~FragTrap();

        void attack(std::string target);
        void highFighGuys(void);
};

#endif
