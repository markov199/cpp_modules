/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:38:15 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/04 14:35:49 by mkovoor          ###   ########.fr       */
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
	this->_dataVec = copy._dataVec;
	this->_database = copy._database;

}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
		this->_dataVec = rhs._dataVec;
		this->_database = rhs._database;
	}
	return (*this);

	
}

void BitcoinExchange::getBitcoinValue(std::string filename)
{
	std::ifstream file , file2;
	std::string line;
	std::string date;
	std::string valueStr;
	std::map<std::string, double>::iterator mapItr;
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
		_database[date] = value;
		_dataVec.push_back(make_pair(date, value));
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
		for(int i = 0; i < (int)_dataVec.size(); i++)
			if (_dataVec[i].first == date)
			std::cout << date << " => " << value  << " = " << ((_dataVec[i].second)) << std::endl;

		mapItr = _database.find(date);
		if (mapItr == _database.end())
			mapItr = --_database.lower_bound(date);
		std::cout << date << " => " << value  << " = " << ((mapItr->second)) << std::endl;
	}
}