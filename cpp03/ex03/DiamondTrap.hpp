/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 07:05:41 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/22 07:05:45 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;

    public:
        DiamondTrap();
        DiamondTrap(std::string const &name);
        DiamondTrap(DiamondTrap &rhs);
        DiamondTrap &operator=(const DiamondTrap &rhs);
        ~DiamondTrap();

        using ScavTrap::attack;
        void setName(std::string name);
		void whoAmI(void);
};
#endif
