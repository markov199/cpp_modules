/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:21:08 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/17 11:31:37 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_HPP
#define BITCOIN_HPP

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<exception>
#include<map>
#include<cstdlib> //atof func
#include<cstddef> // std::size_t
class BitcoinExchange
{
	private:
		std::map<std::string, double> _database;
		std::string _inputfile;
		bool checkDate(std::string date);
		bool isLeapYear(int year);
		void getDataBase();


	public:
		BitcoinExchange();
		BitcoinExchange(std::string);
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);
		void getBitcoinValue() throw();
		void getBitcoinValue(std::string inputfile) throw();
};

#endif