/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:40:41 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/21 14:56:09 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stack>
#include"RPN.hpp"

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		std::cout << " ************* Calling constructor with expression *****\n";
		RPN cal3("8 9 * 9 - 9 - 9 - 4 - 1 +");

		std::cout << "\n*********************\n";
		RPN calculator , cal2;
		std::string input(argv[1]);
		if (input.find_first_not_of("0123456789+*/- ") == std::string::npos)
		{
			calculator.calculate(argv[1]);

			std::cout << "\ncalling calculate from outside\n";
			cal2.calculate(argv[1]);
		}
		else
			std::cerr << "Invald input \n";
	}
}