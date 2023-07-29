/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:51:12 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/26 07:36:57 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Span.hpp"


int main()
{
	try
	{

		Span test = Span(3);
		int num[] = {11, 2, 34};
		test.fill(&num[0], num + 2);
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.shortestSpan() << std::endl;
		Span test1 = Span(5);
		
		test1.addNumber(6);
		test1.addNumber(3);
		test1.addNumber(17);
		test1.addNumber(9);
		test1.addNumber(11);
		std::cout << test1.longestSpan() << std::endl;
		std::cout << test1.shortestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
return 0;

}
