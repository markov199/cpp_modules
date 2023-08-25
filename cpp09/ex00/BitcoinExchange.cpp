/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:38:15 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/25 10:44:45 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange():_database(), _inputfile()
{

}

BitcoinExchange::BitcoinExchange(std::string inputfile):_database(), _inputfile(inputfile)
{
	this->getBitcoinValue();
}

BitcoinExchange::BitcoinExchange(std::string inputfile):_database(), _inputfile(inputfile)
{
	this->getBitcoinValue();
}

BitcoinExchange::~BitcoinExchange():_database()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	this->_database = copy._database;
	this->_inputfile = copy._inputfile;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
		this->_database = rhs._database;
		this->_inputfile = rhs._inputfile;
	}
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
		return(0);
	getline(ss, token, '-');
	day = atof(token.c_str());
	if (day < 1 || day > 31)
		return (0);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
	day =  strtod(date, &ptrend);
	if (day > 31 || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30))
	{
		std::cerr << "error\n";
		return (0);
	if (month == 2)
	{
		if ((isLeapYear(year) && day > 29) || (!isLeapYear(year) && day > 28))
			return (0);
	}
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

void BitcoinExchange::getBitcoinValue() throw()
{
	std::ifstream file;
	std::string line;
	std::string date;
	char discard;
	double value;
	std::map<std::string, double>::iterator mapItr;
	std::stringstream input;

	try
	{
		getDataBase();
		if (_inputfile.empty())
		{
			std::cout << "Please provide an input file\n";
			std::cin >> _inputfile;
		}			
		file.open(_inputfile.c_str());
		if (!file)
			throw ("Error in opening input file");
		getline(file, line); // to skip header
		while(getline(file, line))
		{ 
			input.str("");
			input.clear();
			input << line;
			input >> date >> discard >> value;
			if (input.fail())
			{
				std::cerr << "Error: BAD INPUT " << line << std::endl;
				continue ;
			}
			if (!checkDate(date))
			{
				std::cerr << "Error: INVALID DATE " << date << std::endl;
				continue ;
			}
			if (value < 0 || value > 1000)
			{
				std::cerr << "Error: BAD VALUE " << value << " (valid value range betwen 0 and 1000)\n";
				continue ;
			}
			mapItr = _database.find(date);
			if (mapItr == _database.end())
			{
				if(_database.lower_bound(date) == _database.begin())
					std::cout << "Error: data for "<< date << " does not exist. Dates before Jan 03 2009 are invalid\nOn 3 January 2009, the bitcoin network was created when Nakamoto mined the starting block of the chain, known as the genesis block.\n";
				else
				{
					mapItr = --_database.lower_bound(date); // find and lower_bound return bidirectional ierator in map
				}
			}		
			std::cout << date << " => " << value  << " = " << (value * (mapItr->second)) << std::endl;
		}
	}
	catch (const char * error) 
	{
    	std::cerr << error << std::endl;
	}
}

void BitcoinExchange::getBitcoinValue(std::string inputfile) throw()
{
	std::ifstream file;
	std::string line, date;
	char discard;
	double value;
	std::map<std::string, double>::iterator mapItr;
	std::stringstream input;

	try
	{
		getDataBase();
		file.open(inputfile.c_str());
		if (!file)
			throw ("Error in opening input file");
		getline(file, line); // to skip header
		while(getline(file, line))
		{
			input.str("");
			input.clear();
			input << line;
			input >> date >> discard >> value;
			if (input.fail())
			{
				std::cerr << "Error: BAD INPUT " << line << std::endl;
				continue ;
			}
			if (!checkDate(date))
			{
				std::cerr << "Error: INVALID DATE " << date << std::endl;
				continue ;
			}		
			if (value < 0 || value > 1000)
			{
				std::cerr << "Error: BAD VALUE " << value << " (valid value range betwen 0 and 1000)\n";
				continue ;
			}
			mapItr = _database.find(date);
			if (mapItr == _database.end())
			{
			 	if(_database.lower_bound(date) == _database.begin())
					std::cout << "Error: data for "<< date << " does not exist. Dates before Jan 03 2009 are invalid\nOn 3 January 2009, the bitcoin network was created when Nakamoto mined the starting block of the chain, known as the genesis block.\n";

				else
				{
					mapItr = --_database.lower_bound(date); // find and lower_bound return bidirectional ierator in map
				}
			}
			std::cout << date << " => " << value  << " = " << (value * (mapItr->second)) << std::endl;
		}
	}
	catch (const char * error) 
	{
    	std::cerr << error << std::endl;
	}
}

void BitcoinExchange::getDataBase()
{
	std::ifstream file;
	std::string line;
	std::string date;
	std::map<std::string, double>::iterator mapItr;
	double value;
	std::stringstream input;
	
	file.open("data.csv");
	if (!file)
		throw("Unable to open database file");
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
}
