/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:21:25 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/01 15:05:20 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include<stack>
#include<sstream>
#include"RPN.hpp"

RPN::RPN()
{

}

RPN::~RPN()
{

}

RPN::RPN(const RPN &copy)
{

}

RPN &RPN::operator=(const RPN &rhs)
{

}

void RPN::doOperation(char c, std::stack<int> numberStack)
{
	int x, y;
	char c;

	if (numberStack.size() > 1)
	{
		x = numberStack.top();
		numberStack.pop();
		y = numberStack.top();
		numberStack.pop();
		
	}

}

void RPN::calculate(std::string expression)
{
	std::stack<int> numberStack;
	std::stack<int> operatorStack;
	std::string  input;
	
	std::stringstream ss;

	ss << expression;
	while(ss >> input)
	{
		if (input.find("_+*/") != std::string::npos)
		{
			
		}
			doOperation((input.c_str()[0]), numberStack);

	}

}