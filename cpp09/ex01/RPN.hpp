/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:53:57 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/17 14:29:54 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include<iostream>
#include<cstdlib>
#include<stack>
#include<exception>

class RPN
{
	private:
		enum operatorType {MUL, PLUS, MINUS, DIV};
		std::stack<int> _numberStack;
		std::string _expression;
		int doOperation(int x);
		std::string _operatorString;

	public:
		~RPN();
		RPN();
		RPN(std::string expression);
		RPN(const RPN &copy);
		RPN &operator=(const RPN &rhs);
		void calculate(std::string expression);
		class DivisionByZero: public std::exception
		{
			public:
				const char *what() const throw();
		};
};
#endif