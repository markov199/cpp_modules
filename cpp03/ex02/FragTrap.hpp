#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include<iostream>
#include"ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
		FragTrap(FragTrap &rhs);
		FragTrap &operator=(const FragTrap &rhs);
        void attack(std::string target);
        void highFighGuys(void);
};

#endif
