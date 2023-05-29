/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:06:06 by mkovoor           #+#    #+#             */
/*   Updated: 2023/02/27 13:51:26 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include"Contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

void Contact::setContact(int i)
{
	std::cout << "Please enter first name" << std::endl;
	std::cin >> this->Firstname;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	std::cout << "Please enter last name" << std::endl;
	std::cin >> this->Lastname;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	std::cout << "Please enter Nick name" << std::endl;
	std::cin >> this->Nickname;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	std::cout << "Please enter Phonenumber" << std::endl;
	std::cin >> this->Phonenumber;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	std::cout << "Please enter Darkest secret" << std::endl;
	std::getline(std::cin ,this->DarkestSecret);
	// std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}
void Contact::getContact()
{
	if ((this->getFirstname()).length() !=0)
	{

		std::cout << "Firstname: " << this->getFirstname() << std::endl;
		std::cout << "Lastname: " << this->getLastname() << std::endl;
		std::cout << "Nickname: " << this->getNickname() << std::endl;
		std::cout << "Phonenumber: " << this->getPhonenumber() << std::endl;
		std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
	}
	else
		std::cout << "no information for this index" << std::endl;

}

std::string Contact::getFirstname(void)
{
	return (this->Firstname);
}

std::string Contact::getLastname(void)
{
	return (this->Lastname);
}
std::string Contact::getNickname(void)
{
	return (this->Nickname);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->DarkestSecret);
}

std::string Contact::getPhonenumber(void)
{
	return (this->Phonenumber);
}
