/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:52:36 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/29 09:07:21 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include<iostream>
#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_myBrain;
	
    public:
        Cat();
        Cat(Cat &copy);
        Cat &operator=(const Cat &rhs);
        ~Cat();

	
        virtual void makeSound()const;
		void setIdea(std::string idea);
		void getIdea(void);
};
#endif