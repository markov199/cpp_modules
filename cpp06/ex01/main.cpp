/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:53:10 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/13 09:48:58 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include"Serializer.hpp"


void ft_title(std::string title)
{
	std::cout << std::endl << "*********** " << title <<" *********** " << std::endl << std::endl;
}

int main()
{
	Data myData, *myData2;
	uintptr_t allPtr;

	myData.i = 10;
	myData.a = 'A';
	myData.b = 'B';
	myData.c = 'C';
	myData.d = 'D';

	ft_title("Printing data");
	std::cout << &myData << std::endl;
	std::cout << "myData.a " << myData.a << std::endl;
	std::cout << "myData.b " << myData.b << std::endl;
	std::cout << "myData,c " << myData.c << std::endl;
	std::cout << "myData.d " << myData.d << std::endl;
	
	allPtr = Serializer::serialize(&myData);
	std::cout << allPtr << std::endl;
	myData2 =  Serializer::deserialize(allPtr);
	std::cout << myData2 << std::endl;
	allPtr = Serializer::serialize(&myData);
	std::cout << allPtr << std::endl;

	ft_title("Printing after casting back");
	std::cout << "myData2->a " << myData2->a << std::endl;
	std::cout << "myData2->b " << myData2->b << std::endl;
	std::cout << "myData2->c " << myData2->c << std::endl;
	std::cout << "myData2->b " << myData2->d << std::endl;
}