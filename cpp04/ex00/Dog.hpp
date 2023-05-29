/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:52:51 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/23 11:46:14 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include<iostream>
#include"Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(Dog &copy);
        Dog &operator=(const Dog &rhs);
        ~Dog();
	
        void makeSound()const;
};

#endif