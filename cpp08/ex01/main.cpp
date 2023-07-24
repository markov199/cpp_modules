/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:51:12 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/24 11:53:58 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Span.hpp"


int main()
{
	try
	{
		Span test = Span(10061);
		test.fill();
		// test.addNumber(6);
		// test.addNumber(3);
		// test.addNumber(17);
		// test.addNumber(9);
		// test.addNumber(11);
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.shortestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
return 0;

}
