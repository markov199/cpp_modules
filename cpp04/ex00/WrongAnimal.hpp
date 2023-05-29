/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:24:24 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/23 12:24:54 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
 #include<iostream>

class WrongAnimal
{
    protected:
        std::string _type;

    public:
    WrongAnimal();
	WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal &copy);
    WrongAnimal &operator=(const WrongAnimal &rhs);
    virtual ~WrongAnimal();
    
    std::string getType()const;
	void makeSound()const;
    
};

#endif