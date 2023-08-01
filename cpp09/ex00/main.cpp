/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:20:51 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/01 14:11:27 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<map>
#include<cstddef> // std::size_t
#include"BitcoinExchange.hpp"

//check for lowerbound also txt files? and valid dates

int main (int argc, char *argv[])
{
	if(argc == 2)
	{
		BitcoinExchange bitcoin;
		bitcoin.getBitcoinValue(argv[1]);
	}
	// else 
	// std::cout << " input format ./btc <input filename>\n";		
}
	