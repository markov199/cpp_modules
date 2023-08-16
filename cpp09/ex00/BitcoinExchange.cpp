/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:38:15 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/10 14:00:24 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange():_database()
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

bool BitcoinExchange::checkDate(std::string date)
{
	std::stringstream ss(date);
	// std::string token;
	int year, month, day;
	char *ptrend;

	// getline(ss, token, '\n');
	year = strtod(date, &ptrend);
	month = strtod(date, &ptrend);
	if (month < 1 || month > 12)
	{
		std::cerr << "Error not valid month " << month << '\n';
		return(0);
	}
	getline(ss, token, '-');
	day =  strtod(date, &ptrend);
	if (day > 31 || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30))
	{
		std::cerr << "error\n";
		return (0);
	}
	if (month == 2)
	{
		if ((isLeapYear(year) && day > 29) || (!isLeapYear(year) && day > 28))
		{
			std::cerr << "Error\n";
			return (0);
		}
	}
	// std::cout << "data" << year << " " << month << " " << day << " \n";
	return (1);
}


bool BitcoinExchange::isLeapYear(int year)
{
	if(!(year % 4))
	{
		if(!(year % 100) && (year % 400))
			return (0);
		return (1);
	}
	return (0);
}

void BitcoinExchange::getBitcoinValue(std::string filename)
{
	std::ifstream file , file2;
	std::string line;
	std::string date;
	std::string valueStr;
	// std::map<std::string, double> dataMap;
	std::map<std::string, double>::iterator mapItr;
	char discard;
	double value;
	std::stringstream input;	

	file.open("data2.csv");
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
	}
	file.close();
	file.open(filename.c_str());
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
		checkDate(date);
		mapItr = _database.find(date);
		if (mapItr == _database.end())
			mapItr = --_database.lower_bound(date); // find and lower_bound return bidirectional ierator in map
		std::cout << date << " => " << value  << " = " << ((mapItr->second)) << std::endl;
	}
}
