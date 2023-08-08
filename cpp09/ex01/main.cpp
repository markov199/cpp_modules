/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:40:41 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/08 12:13:40 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stack>
#include"RPN.hpp"

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		std::cout << RPN::calculate(argv[1]);
	}
}

//check for valid input chars