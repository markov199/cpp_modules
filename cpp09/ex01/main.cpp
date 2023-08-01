/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:40:41 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/01 14:14:52 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stack>
#include"RPN.hpp"

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		RPN::calculate(argv[1]);
	}
}