/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:26:09 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/07 09:43:48 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"
#include<iostream>

int main(int ac, char *av[])
{
	Harl harlFilter;
	std::string filter;

	if (ac == 1)
	{
		std::cout << "Enter Filter level for complaints" << std::endl;
		std::cin >> filter;
		harlFilter.filterComplaints(filter);
	}
	else
	{
		filter = av[1];
		harlFilter.filterComplaints(filter);
	}

}