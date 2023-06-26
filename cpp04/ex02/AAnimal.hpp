/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:52:21 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/25 12:28:22 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP
#include<iostream>
#include"Brain.hpp"

class AAnimal
{
    protected:
        std::string _type;

    public:
    virtual ~AAnimal();
	AAnimal();
	AAnimal(std::string type);
	AAnimal(AAnimal &copy);
	AAnimal &operator=(const AAnimal &rhs);
    
    std::string getType()const;
	virtual void makeSound()const= 0;  
};

#endif
