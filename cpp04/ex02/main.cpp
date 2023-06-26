/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:59:13 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/29 15:08:42 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"AAnimal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
#include"Brain.hpp"

// int main()
// {
// const AAnimal* j = new Dog;
// const AAnimal* i = new Cat;
// AAnimal *animalHorde[10];
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
    // const AAnimal* meta = new AAnimal("Bat");
	// delete meta;
	// std::cout << std::endl;

	// testing Brain class
	std::cout << "** test if ideas are deep copy **" << std::endl;
	Dog dog;

	std::cout << "***** setting ideas for  Cat ****" << std::endl <<std::endl;
	dog.setIdea("feeling asleep");
	dog.setIdea("looking for bones");
	dog.setIdea("go and hunt a cat");
	dog.getIdea();

	std::cout << "***** Initialising a Cat ****" << std::endl <<std::endl;
	Cat cat;
		
	cat.setIdea("need to rest");
	cat.getIdea();

	std::cout << "***** testing deep copy ****" << std::endl <<std::endl;

    // testing deep copy
	Dog dog2 = dog;
    // Dog dog2; // to do with copy constructor just include Dog dog2 = dog;
  	// dog2 = dog; //copy by operator=
	dog2.getIdea();
    dog2.setIdea("idea only for dog2"); // now changed there is one more idea only in dog2
	std::cout << "***** setting ideas for dog ****" << std::endl <<std::endl;
	dog.setIdea("idea only for dog1"); // now this 5th idea is diff between the dogs
    std::cout << "checking if is different " << std::endl;
	dog.getIdea();
	std::cout << "****** dog2*****" << std::endl;
	dog2.getIdea();
    // std::cout << *a << std::endl;
	// std::cout << *c << std::endl;
  std::cout << std::endl <<  "*** cat3******" << std::endl;
	Cat cat3;
	cat3.setIdea("i am such a smart cat");
	cat3.getIdea();
	
return 0;
}
