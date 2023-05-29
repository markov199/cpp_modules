/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:44:52 by mkovoor           #+#    #+#             */
/*   Updated: 2023/02/27 13:45:55 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include<iostream>
#include<string>
#include<iomanip>

PhoneBook::PhoneBook(void)
{
	std::cout << " Welcome To The Awesome Phonebook.\n";
	std::cout << "======================================\n";
	std::cout << "type 'ADD' to add your contacts;\n";
	std::cout << "type 'SEARCH' to search your contacts;\n";
	std::cout << "type 'EXIT' to exit the phonebook;\n";
	std::cout << "======================================\n";
	std::cout << std::endl;
}

PhoneBook::~PhoneBook(void)
{

}

void PhoneBook::addContact(void)
{
	static int i;
	this->contacts[i % 8].setContact(i % 8);
	i++;
}

void PhoneBook::displayContacts(void)
{
	int i;

	i = 0;
	std::cout << "|--------- ----------- ---------- ----------|" << std::endl;
	std::cout << "| INDEX   |FIRST NAME |LAST NAME |NICKNAME  |" << std::endl;
	std::cout << "|--------- ----------- ---------- ----------|" << std::endl;
	
	while (i < 8)
	{
		if((this->contacts[i].getFirstname()).length() !=0)
		{
			std::cout << std::right << std::setw(10) << i + 1 << "|";
			std::cout << std::right << std::setw(10) <<this->setDisplay(contacts[i].getFirstname()) << "|";
			std::cout << std::right << std::setw(10) <<this->setDisplay(contacts[i].getLastname()) << "|";
			std::cout << std::right << std::setw(10) <<this->setDisplay(contacts[i].getNickname()) << "|" << std::endl;
			std::cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- " << std::endl;
		}
		i++;
	}
	std::cout << "Enter index of contact" << std::endl;
	std::cin >> i;
	if(std::cin.good())
	{
		if (i >= 1 && i <= 8)
			this->viewContact(i -1);
		else 
			std::cout << "Valid index numbers are 1 to 8" << std::endl;
	}
	else
	{
		std::cout << "Valid index numbers are 1 to 8" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	}
}

std::string PhoneBook::setDisplay(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::viewContact(int i)
{
	this->contacts[i].getContact();
}
