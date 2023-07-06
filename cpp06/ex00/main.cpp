/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:33:06 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/06 12:18:01 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		ScalarConverter conv(av[1]);
		conv.convert(av[1]);

	}
	else
		std::cout << "Please enter one argument to be converted";
}