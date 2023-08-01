/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:38:15 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/01 12:38:09 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	this->_database = copy._database;

}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
		this->_database = rhs._database;
	return (*this);

	
}

void BitcoinExchange::getBitcoinValue(std::string filename)
{
	std::ifstream file , file2;
	std::string line;
	std::string date;
	std::string valueStr;
	std::map<std::string, double> dataMap;
	char discard;
	double value;
	std::stringstream input;
	

	file.open("data.csv");
	if(!file)
	{
		std::cerr << "Unable to open database\n";
		exit(1);
	}
	getline(file, line);
	while(getline(file, line))
	{
		input.str("");
		input.clear();
		input << line;
		getline(input, date, ',');
		input >> value;
		dataMap[date] = value;
	}
	file.close();
	file.open(filename);
	if(!file)
	{
		std::cerr << "Unable to open file " << filename << std::endl;
		exit(1);
	}
	getline(file, line); // to skip header
	while(getline(file, line))
	{
		input.str("");
		input.clear();
		input << line;
		input >> date >> discard >> value;
		if (input.fail())
		{
			std::cerr << "Error: bad input " << line << std::endl;
			continue ;
		}
		if (value < 0 || value > 1000)
		{
			std::cerr << "Error: " << value << " (value range betwen 0 and 1000)\n";
			continue ;
		}
		std::cout << date << " => " << value  << " = " <<(value * (dataMap.lower_bound(date)->second)) << std::endl; // check for lower bound value
	}
}