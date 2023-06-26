/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:59:13 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/29 15:06:25 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
#include"Brain.hpp"

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// Animal *animalHorde[10];
// delete j;//should not create a leak
// delete i;
// for (int i = 0; i < 10; i++)
// {
// 	animalHorde[i++] = new Dog(); 
// 	animalHorde[i] = new Cat();	
// }
// for (int i = 0; i < 10; i++)
// {
// 	delete animalHorde[i]; 	
// }
// return 0;
// }

int main()
{
    
	//when animal is not an abstract class, it creates...
    const Animal* meta = new Animal("Bat");
	delete meta;
	std::cout << std::endl;

	// testing Brain class
	std::cout << "** test if ideas are deep copy **" << std::endl;
	Dog dog;
	Cat cat;
	// Animal *cat2 = new Cat;
	// Animal *dog3 = new Dog;
	// *cat2 = *dog3;

	
	
	cat.setIdea("need to rest");
	dog.setIdea("feeling asleep");
	dog.setIdea("looking for bones");
	dog.setIdea("go and hunt a cat");
	dog.getIdea();

    // testing deep copy
    Dog dog2; // to do with copy constructor just include Dog dog2 = dog;
  	dog2 = dog; //copy by operator=
	dog2.getIdea();
    dog2.setIdea("idea only for dog2"); // now changed there is one more idea only in dog2
	dog.setIdea("idea only for dog1"); // now this 5th idea is diff between the dogs
    std::cout << "checking if is different " << std::endl;
	dog.getIdea();
	dog2.getIdea();
    // std::cout << *a << std::endl;
	// std::cout << *c << std::endl;
  
	Cat cat3;
	cat3.setIdea("i am such a smart cat");
	cat3.getIdea();

	return 0;
}
