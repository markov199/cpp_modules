/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:18:57 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/11 11:10:37 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include<iostream>
#include<sstream>
#include<cstdlib>

enum dataType {NDEF, CHAR, INT, FLOAT, DOUBLE, INF, NNUM};

class ScalarConverter
{
	private:
		double _input;
		dataType _type;
		std::string _inputData;
		bool isPseudo(const std::string inputString);
		void getType(const std::string inputString);

		ScalarConverter(std::string inputData);
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &rhs);

		std::string getInputData();
		void castToChar();
		void castToInt();
		void castToFloat();
		void castToDouble();
		// operator char();
		// operator int();
		// operator float();
		// operator double();
		
	public:
		void static convert(std::string inputString);	
};
#endif