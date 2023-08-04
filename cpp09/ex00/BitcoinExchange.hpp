/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:21:08 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/04 13:52:48 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_HPP
#define BITCOIN_HPP

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<utility> // pair defination
#include<map>
#include<cstddef> // std::size_t
class BitcoinExchange
{
	private:
		std::map<std::string, double> _database;
		// typedef std::pair<std::string, double> myPair;
		std::vector<std::pair<std::string, double> > _dataVec;
		

	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);
		void getBitcoinValue(std::string filename);
};

#endif