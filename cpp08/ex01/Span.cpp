/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:51:22 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/24 08:31:16 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stdexcept>
#include<cstdlib>
#include"Span.hpp"
  

Span::Span():_array(NULL), _N(0), _size(0)
{}

Span::Span(unsigned int size):_array(NULL), _N(size), _size(0)
{
	if (_N != 0)
	{
		_array = new int [_N] ();
	}
}

Span::~Span()
{
	delete[] _array;
	_array = NULL;
}

Span::Span(const Span &copy)
{
	delete[] this->_array;
	this->_array = new int[copy._N] ();
	this->_N = copy._N;
	for (int i = 0; i < this->_N; i++)
		this->_array[i] = copy._array[i];
}

Span &Span::operator=(const Span &rhs)
{
	delete[] this->_array;
	this->_array = new int[rhs._N] ();
	this->_N = rhs._N;
	for (int i = 0; i < this->_N; i++)
		this->_array[i] = rhs._array[i];
	return (*this);
}

void Span::addNumber(int num)
{
	if (_size < _N)
	{
		_array[_size] = num;
		_size++;
	}
	else 
		throw (std::out_of_range("Span array is full!\n"));
}

unsigned int Span::shortestSpan(void)
{
	if (_size < 2)
		throw (invalidOperation());
	int shortest = abs((_array[0] - _array[1]));
	for (int i = 0; i < _size; i++)
	{
		for(int j = i + 1; j < _size; j++)
		 	if (abs((_array[i] - _array[j])) < shortest)
				shortest = abs((_array[i] - _array[j]));
	}
	return (shortest);
}

unsigned int Span::longestSpan(void)
{
	if (_size < 2)
		throw (invalidOperation());
	int longest = abs((_array[0] - _array[1]));
	for (int i = 0; i < _size; i++)
	{
		for(int j = i + 1; j < _size; j++)
		{
			std::cout << i << " " << j <<'\n';
		 	if (abs((_array[i] - _array[j])) > longest)
			{
				longest = abs((_array[i] - _array[j]));
				std::cout << longest  << "longest" << _array[i] << " " << _array[j] << '\n';
			}
		}
	}
	return (longest);
}

const char *Span::invalidOperation::what () const throw()
{
	return ("Span operation invalid\n");
}