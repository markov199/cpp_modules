/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:51:22 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/29 13:41:41 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stdexcept>
#include<cstdlib>
#include<algorithm>
#include<numeric>
#include"Span.hpp"
  

Span::Span():_N(0)
{}

Span::Span(unsigned int size):_N(size)
{}

Span::~Span()
{}

Span::Span(const Span &copy)
{
	_array.assign(copy._array.begin(), copy._array.end());
}

Span &Span::operator=(const Span &rhs)
{
	
	_array.assign(rhs._array.begin(), rhs._array.end());	
	return (*this);
}

void Span::addNumber(int num)
{
	if (_array.size() < _N)
	{
		std::vector<int>::iterator itr = _array.begin() ;
		_array.insert(itr, num);
	}
	else 
		throw (std::out_of_range("Span array is full!"));
}

unsigned int Span::shortestSpan(void)
{
	if (_array.size() < 2)
		throw (invalidOperation());
	unsigned int size = _array.size();
	std::vector<int> diff(size, 0);
	std::sort(_array.begin(), _array.begin() + size);
	std::adjacent_difference(_array.begin(), _array.begin() + size, diff.begin());
	return (*std::min_element(diff.begin(), diff.begin() + size));
	// int shortest = abs((_array[0] - _array[1]));
	// for (int i = 0; i <(int) size; i++)
	// {
	// 	for(int j = i + 1; j < (int)size; j++)
	// 	 	if (abs((_array[i] - _array[j])) < shortest)
	// 			shortest = abs((_array[i] - _array[j]));
	// }
	// return (shortest);



}

unsigned int Span::longestSpan(void)
{
	if (_array.size() < 2)
		throw (invalidOperation());
	std::sort(_array.begin(), _array.begin() + _array.size());
	return (*(_array.begin() + _array.size() - 1) - *(_array.begin()));
}

void Span::fill(int x)
{
	
	for (unsigned int i = 0; i < _N; i++)
		_array.assign(_N, x);
}

void Span::fill(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	_array.assign(start, end);
}

void Span::fill(int *start, int *end)
{
	_array.assign(start, end);
}

const char *Span::invalidOperation::what () const throw()
{
	return ("Span operation invalid\n");
}