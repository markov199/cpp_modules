/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:20:51 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/29 12:43:00 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>
#include<string> 
#include<cstddef> // std::size_t
#include"BitcoinExchange.hpp"

int main (int argc, char *argv[])
{
	if (argc == 2)
	{
		std::ifstream file;
		std::string line;
		std::string date;
		char delimit;
		float value;
		int i = 1;
		

		file.open(argv[1]);
		if(!file)
		{
			std::cerr << "Unable to open file: " << argv[1] << std::endl;
			exit(1);
		}
		getline(file, line);
		while(getline(file, line))
		{
			std::stringstream input;
			input << line;
			input >> date;
			input.ignore(256, '|');
			input >> value;
			std::cout << i++ <<". date: " << date << " val: " << value << std::endl;
		}
	}

}