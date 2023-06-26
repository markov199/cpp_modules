/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:52:51 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/29 13:52:59 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include<iostream>
#include"Animal.hpp"
#include"Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *_myBrain;
		
    public:
        Dog();
        Dog(Dog &copy);
        Dog &operator=(const Dog &rhs);
        ~Dog();
	
		void setIdea(std::string idea);
		void getIdea(void);
        void makeSound()const;
};

#endif