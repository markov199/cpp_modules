/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 09:34:13 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/06 09:57:15 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<limits>
#include"ScalarConverter.hpp"


ScalarConverter::ScalarConverter(std::string inputString)
{
	if (inputString.length() == 1 && !(isdigit(inputString.at(0))))
	{
		std::cout << "its a character \n";
		_input = static_cast<int>(inputString.at(0));
	}
	else
		_input = atof(inputString.c_str());
	
}

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
	std::cout << "to char" << std::endl;
	if(_input < std::numeric_limits<char>::min() || _input > std::numeric_limits<char>::max())
	{

		std::cout << _input << " char: impossible" << std::endl;
		return (0);
	}
    return (static_cast<char>(_input));    
}

ScalarConverter::operator int()
{
	std::cout << "to int" << std::endl;
	if(_input < std::numeric_limits<int>::min() || _input > std::numeric_limits<int>::max())
	{
		std::cout << _input << " int: impossible" << std::endl;
		return (0);
	}
    return (static_cast<int>(_input));    
}

ScalarConverter::operator float()
{
    std::cout << " convert to float" <<std::endl;
		if(_input < (std::numeric_limits<float>::min()) || _input > (std::numeric_limits<float>::max()))
		{
			std::cout << _input << " float: Impossible\n" << std::endl;
			return (0);
		}
    return(static_cast<float>(_input));
}

ScalarConverter::operator double()
{
    std::cout << " convert to double" <<std::endl;
		if(_input < (std::numeric_limits<double>::min()) || _input > (std::numeric_limits<double>::max()))
		{
			std::cout << _input << " double: impossible" << std::endl;
			return (0);
		}
    return(static_cast<double>(_input));
   }

void ScalarConverter::convert(std::string inputString)
{
	
	std::cout << _input << std::endl;
	char c = *this;
    std::cout << c <<std::endl;
	int x = *this;
	std::cout << x << std::endl;
    float f =  *this;
    std::cout << f <<std::endl;
    double d = *this;
    std::cout << d <<std::endl;
}