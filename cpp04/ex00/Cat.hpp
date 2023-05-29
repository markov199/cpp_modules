/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:52:36 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/23 13:50:52 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include<iostream>
#include"Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat &copy);
        Cat &operator=(const Cat &rhs);
        ~Cat();

	
        virtual void makeSound()const;
};
#endif