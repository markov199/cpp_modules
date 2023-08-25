/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:20:51 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/25 10:33:12 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<map>
#include<cstddef> // std::size_t
#include"BitcoinExchange.hpp"



int main (int argc, char *argv[])
{
	if(argc == 2)
	{
		BitcoinExchange bitcoin(argv[1]);
		
		std::cout << "\n*******   operator= ******\n";
		BitcoinExchange Acopy = bitcoin;
		Acopy.getBitcoinValue("input2.txt");

		std::cout << "\n***********  taking input file **********\n";
		BitcoinExchange dummy;
		dummy.getBitcoinValue();
	}
	else 
	std::cout << "Input format ./btc <input filename>\n";		
}
	