/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:25:29 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/01 12:14:13 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = str;

	stringPTR = &str;
	std::cout << "memory address of str             "<< &str <<std::endl;
	std::cout << "memory address held by stringPTR  " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF  " << &stringREF << std::endl;
	std::cout << "value of str                   " << str << std::endl;
	std::cout << "value pointed to by stringPTR  " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF  " << stringREF << std::endl;

}