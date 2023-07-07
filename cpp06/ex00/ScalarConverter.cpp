/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 09:34:13 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/06 12:20:57 by mkovoor          ###   ########.fr       */
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

void ScalarConverter::convert(std::string inputString)
{
	if (inputString.length() == 1)
	{
		if(!isdigit(inputString.at(0)))
			_type = CHAR;
		else
			_type = INT;
	}
	else if (inputString.find_first_not_of("-+1234567890") == std::string::npos)
		_type = INT;
	else if (inputString.find_first_of("f") != std::string::npos)
		_type = FLOAT;
	else if (inputString.find_first_of(".") != std::string::npos)
		_type = DOUBLE;
	
	std::cout << std::fixed << std::setprecision(2);
	switch(_type)
	{
		case CHAR:
		{
			_input = static_cast<double>(_inputData.at(0));
			break;
		}
		default:
		{
			_input = atof(_inputData.c_str());
		}
	}
		char c = *this;
		int x = *this;
		float f = *this;
		double d = *this;
}