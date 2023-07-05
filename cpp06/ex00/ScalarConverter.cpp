/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 09:34:13 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/05 14:43:42 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<limits>
#include"ScalarConverter.hpp"


ScalarConverter::ScalarConverter(std::string input)
{
	_input = atof(input.c_str());
}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{

}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{

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
		std::cout << _input << "int: impossible" << std::endl;
		return (0);
	}
    return (static_cast<int>(_input));    
}

ScalarConverter::operator float()
{
    std::cout << " convert to float" <<std::endl;
		if(_input < (std::numeric_limits<float>::min()) || _input > (std::numeric_limits<float>::max()))
		{
			std::cout << _input << "float: Impossible\n" << std::endl;
			return (0);
		}
    return(static_cast<float>(_input));
}

ScalarConverter::operator double()
{
    std::cout << " convert to double" <<std::endl;
		if(_input < (std::numeric_limits<double>::min()) || _input > (std::numeric_limits<double>::max()))
		{
			std::cout << "double: impossible" << std::endl;
			return (0);
		}
    return(static_cast<double>(_input));
   }

void ScalarConverter::convert(void)
{
	char c = _input;
    std::cout << c <<std::endl;
	int x = _input;
	std::cout << x << std::endl;
    float f = _input;
    std::cout << f <<std::endl;
    double d =_input;
    std::cout << d <<std::endl;
}