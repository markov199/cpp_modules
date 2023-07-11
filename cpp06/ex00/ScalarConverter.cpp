/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 09:34:13 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/11 11:12:04 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<iomanip>
#include<limits>
#include"ScalarConverter.hpp"


ScalarConverter::ScalarConverter(std::string inputString):_type(NDEF), _inputData(inputString){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	this->_input = copy._input;
	this->_inputData  = copy._inputData;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	if(this != &rhs)
	{
		this->_input = rhs._input;
		this->_inputData = rhs._inputData;
	}
	return *this;

}

std::string ScalarConverter::getInputData()
{
	return (_inputData);
}

ScalarConverter::operator char()
{
	if(_input < std::numeric_limits<char>::min() || _input > std::numeric_limits<char>::max())
		std::cout << " char: impossible" << std::endl;
	else if (isgraph((int)_input))
    	std::cout << "char:" << (static_cast<char>(_input)) << std::endl;
	else
		std::cout <<" char: cannot be displayed" << std::endl;
	return (0) ;
}

ScalarConverter::operator int()
{
	if(_input < std::numeric_limits<int>::min() || _input > std::numeric_limits<int>::max())
		std::cout << " int: impossible" << std::endl;
	else
    	std::cout << "int:" << static_cast<int>(_input) << std::endl; 
	return (0) ;
}

ScalarConverter::operator float()
{
    std::cout << "float: " << static_cast<float>(_input) << "f\n";
	return (0) ;
}

ScalarConverter::operator double()
{
    std::cout << "double: " << static_cast<double>(_input) << std::endl;
	return (0) ;
}

bool ScalarConverter::isPseudo(const std::string inputString)
{
	int start = 0;
	int sign = 1;
	if (inputString.at(0) == '+' || inputString.at(0) == '-')
	{
		start = 1;
		if (inputString.at(0) == '-')
			sign =-1;
	}
	if (inputString.length() - start == 3)
	{
		if ( start == 0 && inputString.find("nan") != std::string::npos)
		{
			_type = NNUM;
			_input = std::numeric_limits<double>::quiet_NaN();
		}		
		if (inputString.find("inf", start) != std::string::npos)
		{
			_type = INF;
			_input = std::numeric_limits<double>::infinity() * sign;
		}
	}
	if (inputString.length() - start == 4)
	{	
		if ( start == 0 && inputString.find("nanf")!= std::string::npos)
		{
			_type = NNUM;
			_input = std::numeric_limits<float>::quiet_NaN();
		}		
		if (inputString.find("inff", start) != std::string::npos)
		{
			_type = INF;
			_input = std::numeric_limits<float>::infinity() * sign;
		}
	}
	return (_type);
}

void ScalarConverter::getType(const std::string inputString)
{
	if (inputString.length() == 1)
	{
		if(!isdigit(inputString.at(0)))
			_type = CHAR;
		else
			_type = INT;
	}
	else if (inputString.find_first_not_of("-+1234567890.f") == std::string::npos)
	{
		if (inputString.find_first_not_of("+-1234567890") == std::string::npos)
			_type = INT;
		else if (inputString.find_first_of(".") == inputString.find_last_of(".")) // only one decimal point or no decimal point
		{
			if (inputString.find_first_of(".") != std::string::npos && inputString.find_first_of("f") == std::string::npos) // decimal point with no f
				_type = DOUBLE;
				
			else if (inputString.find_first_of("f") == inputString.find_last_of("f")) // has a single 'f'
				_type = FLOAT;		
		}
	}
	else if (!this->isPseudo(inputString))
		_type = NDEF;
}

void ScalarConverter::convert(std::string inputString)
{
	getType(inputString);
	std::cout << _type <<std::endl;
	
	std::cout << std::fixed << std::setprecision(2);
	switch(_type)
	{
		case CHAR:
		{
			_input = static_cast<double>(_inputData.at(0));
			break;
		}
		case INT:
		{
			_input = atof(_inputData.c_str());
			break;
		}
		case FLOAT:
		{
			_input = atof(_inputData.c_str());
			break;
		}
		case DOUBLE:
		{
			_input = atof(_inputData.c_str());
			break;
		}
		case INF:
		{
			break;
		}
		case NNUM:
		{
			break;
		}
		default:
		{
			std::cout << "not valid input\n";
			return ;
		}
	}
		char c = *this;
		int x = *this;
		float f = *this;
		double d = *this;
}