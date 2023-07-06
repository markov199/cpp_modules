/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:18:57 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/06 11:43:55 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include<iostream>
#include<sstream>

enum dataType {NDEF, CHAR, INT, FLOAT, DOUBLE};

class ScalarConverter
{
	private:
		double _input;
		dataType _type;
		std::string _inputData;

	public:
		ScalarConverter(std::string inputData);
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &rhs);

		std::string getInputData();

		operator char();
		operator int();
		operator float();
		operator double();
		
		void convert(std::string inputString);
		void castFrom(char c);
		void castFrom(int i);
		void castFrom(float f);
		void castFrom(double d);
	
};
#endif