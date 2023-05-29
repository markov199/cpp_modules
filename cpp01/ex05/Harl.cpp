/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:49:02 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/07 11:14:16 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}
void Harl::complain(std::string level)
{
	std::string complainLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for(int i = 0; i < 4; i++)
	{
		if (level.compare(complainLevel[i]) == 0)
		{
			(this->*(func[i]))();
			break;
		}
		else if (i == 3)
			std::cout << "Complaint levels 'DEBUG' 'INFO' 'WARNING' 'ERROR'" << std::endl;
	}
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout <<  "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!"  << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\
years whereas you started working here since last month."  << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."  << std::endl;
}	
	