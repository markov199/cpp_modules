/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:21:25 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/17 15:06:56 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include<stack>
#include<sstream>
#include"RPN.hpp"

RPN::RPN():_numberStack(), _expression(), _operatorString("*+-/")
{

}

RPN::RPN(std::string expression):_numberStack(), _expression(expression), _operatorString("*+-/")
{
	this->calculate(_expression);
}

RPN::~RPN()
{

}

RPN::RPN(const RPN &copy)
{
	this->_expression = copy._expression;
}

RPN &RPN::operator=(const RPN &rhs)
{
	if (this != &rhs)
	{
		this->_expression = rhs._expression;
	}
	return (*this);
}

int RPN::doOperation(int t)
{
	int x, y;

	if (this->_numberStack.size() < 2) // checking if there are two numbers to do operation
		throw std::invalid_argument("Invalid expression: not enough numbers to operate on");	
	x = _numberStack.top();
	_numberStack.pop();
	y = _numberStack.top();
	_numberStack.pop();
	switch(t)
	{
		case MUL:
		{
			_numberStack.push(y * x);
			break;
		}
		case PLUS:
		{
			_numberStack.push(y + x);
			break;
		}
		case MINUS:
		{
			_numberStack.push(y - x);
			break;
		}
		case DIV:
		{
			if( x == 0)
				throw DivisionByZero();
			_numberStack.push( y / x);
			break;
		}
	}
	return(_numberStack.top());
}

void RPN::calculate(std::string expression)
{
	std::string  input;
	float number;
	size_t found;
	
	std::stringstream ss(expression);	
	try
	{
		while(ss >> input)
		{
			found = input.find_first_of(_operatorString);
			if (found != std::string::npos) // found an operator symbol
			{
				if (input.size() == 1) // checking if the input is a single symbol
				{
					found = _operatorString.find_first_of(input.c_str()); // getting the enum value
					this->doOperation(found);
				}
				else
					throw std::invalid_argument("Invalid operator type");		
			}
			else // found a number
			{
				number = atof(input.c_str());
				this->_numberStack.push(number);
			}
		}
		if (_numberStack.size() != 1)
			throw std::invalid_argument("Numbers left in stack! Invalid expression");		
		std::cout << _numberStack.top() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}


const char *RPN::DivisionByZero::what() const throw()
{
	return ("Error: Division by Zero!");
}