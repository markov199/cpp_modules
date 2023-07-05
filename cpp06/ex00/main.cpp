/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:33:06 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/05 12:19:27 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		ScalarConverter conv(av[1]);
		conv.convert();

	}
	else
		std::cout << "Please enter one argument to be converted";
}