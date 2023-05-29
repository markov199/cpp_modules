/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:52:21 by mkovoor           #+#    #+#             */
/*   Updated: 2023/04/05 10:53:33 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include<iostream>

class Animal
{
    protected:
        std::string _type;

    public:
    Animal();
	Animal(std::string type);
    Animal(Animal &copy);
    Animal &operator=(const Animal &rhs);
    virtual ~Animal();
    
    std::string getType()const;
	virtual void makeSound()const;
    
};

#endif
