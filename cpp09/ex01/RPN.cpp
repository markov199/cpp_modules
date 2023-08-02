/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:21:25 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/02 12:55:22 by mkovoor          ###   ########.fr       */
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

void RPN::doOperation(int t)
{
	int x, y;
	

	if (_numberStack.size() > 1)
	{
		x = _numberStack.top();
		_numberStack.pop();
		y = _numberStack.top();
		_numberStack.pop();
		std::cout << x << ", " << y << '\n';
		switch(t)
		{
			case MUL:
			{
				std::cout << y * x << '\n';
				_numberStack.push(y * x);
				break;
			}
			case PLUS:
			{
				std::cout << y + x << '\n';

				_numberStack.push(y + x);
				break;
			}
			case MINUS:
			{
				std::cout << y - x << '\n';

				_numberStack.push(y - x);
				break;
			}
			case DIV:
			{
				if( x == 0)
				{
					std::cerr << "Error: Division by zero\n";
					exit(1);
				}
				std::cout << y / x << '\n';

				_numberStack.push( y / x);
				break;
			}
		}
	}
	else
	{
		std::cerr << "Invalid expression\n";
		exit (1);
	}

}

void RPN::calculate(std::string expression)
{
	RPN calculator;
	std::stack<int> operatorStack;
	std::string  input;
	float number;
	size_t found;
	std::string operatorString = "*+-/";
	
	std::stringstream ss;

	ss << expression;
	while(ss >> input)
	{
		found = input.find_first_of(operatorString);
		if (found != std::string::npos)
		{
			std::cout << "stack size" << calculator._numberStack.size() << '\n' ;
			if (input.size() == 1 && calculator._numberStack.size() > 1)
			{
				found = operatorString.find_first_of(input.c_str());
				calculator.doOperation(found);
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

}