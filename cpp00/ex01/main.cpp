/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:28:04 by mkovoor           #+#    #+#             */
/*   Updated: 2023/02/27 13:35:03 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Contact.hpp"
#include"PhoneBook.hpp"

int main ()
{
	PhoneBook phonebook;
	std::string option;

	while (!std::cin.eof())
	{
		std::getline(std::cin >> std::ws, option);
		if (option == "ADD")
			phonebook.addContact();
		else if (option == "SEARCH")
			phonebook.displayContacts();
		else if (option == "EXIT")
		{
			std::cout << "Since its an Awesome Phonebook.. All are contacts will be lost!!\n";
			return (0);
		}
		std::cout << "You can ADD, SEARCH contacts.\nType EXIT to exit" << std:: endl;		
	}
}