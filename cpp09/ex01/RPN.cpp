/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:21:25 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/08 12:15:11 by mkovoor          ###   ########.fr       */
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
	this->_numberStack = copy._numberStack;
}

RPN &RPN::operator=(const RPN &rhs)
{
	if (this != &rhs)
	{
		this->_numberStack = rhs._numberStack;
	}
	return (*this);
}

int RPN::doOperation(int t)
{
	int x, y;
	

	if (_numberStack.size() > 1)
	{
		x = _numberStack.top();
		_numberStack.pop();
		y = _numberStack.top();
		_numberStack.pop();
		switch(t)
		{
			case MUL:
			{
				_numberStack.push(y * x);
				return(_numberStack.top());
			}
			case PLUS:
			{
				_numberStack.push(y + x);
				return(_numberStack.top());
			}
			case MINUS:
			{
				_numberStack.push(y - x);
				return(_numberStack.top());
			}
			case DIV:
			{
				if( x == 0)
				{
					std::cerr << "Error: Division by zero\n";
					exit(1);
				}
				_numberStack.push( y / x);
				return(_numberStack.top());
			}
		}
	}
		std::cerr << "Invalid expression\n";
		exit (1);
	
}

int RPN::calculate(std::string expression)
{
	RPN calculator;
	std::stack<int> operatorStack;
	std::string  input;
	float number;
	size_t found;
	int answer;
	std::string operatorString = "*+-/";
	
	std::stringstream ss;

	ss << expression;
	while(ss >> input)
	{
		found = input.find_first_of(operatorString);
		if (found != std::string::npos)
		{
			if (input.size() == 1 && calculator._numberStack.size() > 1)
			{
				found = operatorString.find_first_of(input.c_str());
				answer = calculator.doOperation(found);
			}
			else
			{
				std::cerr << "Invalid expression\n";
				exit (1);
			}			
		}
		else 
		{
			number = atof(input.c_str());
			calculator._numberStack.push(number);
		}
	}
	return (answer);
}