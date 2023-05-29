/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 08:21:56 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/07 08:28:19 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac, char *av[])
{
	Harl customer;
	std::string level;

	if (ac == 2)
	{
		customer.complain(av[1]);
	}
	else
	{
		std::cout <<  "Please enter complaint level" << std::endl;
		std::cin >> level;
		customer.complain(level);
	}
	
}