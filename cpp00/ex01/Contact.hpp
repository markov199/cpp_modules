/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:07:21 by mkovoor           #+#    #+#             */
/*   Updated: 2023/02/27 12:01:54 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>


#ifndef CONTACT_HPP
#define CONTACT_HPP
class Contact
{
	private:
		std::string Firstname;
		std::string	Lastname;
		std::string	Nickname;
		std::string	DarkestSecret;	
		std::string	Phonenumber;
		int	index;
		std::string getDarkestSecret(void);
		std::string getPhonenumber(void);

	public:
		Contact();
		~Contact();
		void setContact(int i);
		void getContact(void);
		std::string getFirstname(void);
		std::string getLastname(void);
		std::string getNickname(void);
	
};

#endif
