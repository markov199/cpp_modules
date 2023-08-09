/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:53:57 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/08 12:11:36 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include<iostream>
#include<cstdlib>
#include<stack>

enum operatorType {MUL, PLUS, MINUS, DIV};
class RPN
{
	private:
		std::stack<int> _numberStack;
		RPN();
		~RPN();
		RPN(const RPN &copy);
		RPN &operator=(const RPN &rhs);
		int doOperation(int x);

	public:
		static int calculate(std::string expression);
};
#endif