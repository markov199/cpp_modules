/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:28:18 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/22 07:25:38 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include<iostream>
#include"ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
		ScavTrap(ScavTrap &rhs);
		ScavTrap &operator=(const ScavTrap &rhs);
		
        void attack(std::string target);
        void guardGate();
		void printVitals_scav(void);
};
#endif
