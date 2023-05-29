/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 07:45:33 by mkovoor           #+#    #+#             */
/*   Updated: 2023/02/27 13:32:28 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include<iostream>
#include"Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		std::string setDisplay(std::string str);
		
	public:
		PhoneBook();
		~PhoneBook();
		void addContact();
		void displayContacts(void);
		void viewContact(int i);
		

};

#endif
