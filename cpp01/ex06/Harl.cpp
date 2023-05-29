/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 08:52:48 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/07 09:49:25 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::filterComplaints(std::string level)
{
	std::string complainLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int filter;
	for(filter = 0; filter < 4; filter++)
	{
		if (level.compare(complainLevel[filter]) == 0)
			break;
	}
	switch(filter)
	{
		case (0) :
		{
			std::cout << "[ DEBUG ]" << std::endl;
			std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
			std::cout << std::endl;
		}
		case (1) :
		{
			std::cout << "[ INFO ]" << std::endl;
			std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!"  << std::endl;
			std::cout << std::endl;
		}
		case (2) :
		{
			std::cout << "[ WARNING ]" << std::endl;
			std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for	years whereas you started working here since last month."  << std::endl;
			std::cout << std::endl;
		}
		case (3) :
		{
			std::cout << "[ ERROR ]" << std::endl;
			std::cout << "This is unacceptable! I want to speak to the manager now."  << std::endl;
			std::cout << std::endl;
			break;
		}
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			std::cout << std::endl;
		
	}
}

