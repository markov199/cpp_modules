/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:20:51 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/04 09:42:35 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<map>
#include<cstddef> // std::size_t
#include"BitcoinExchange.hpp"

// .txt files? 

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
	