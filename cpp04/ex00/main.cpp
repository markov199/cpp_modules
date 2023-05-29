/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:59:13 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/29 15:20:35 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main()
{
std::cout <<std::endl<< "***** creating an Animal meta" <<std::endl;
const Animal* meta = new Animal();
std::cout <<std::endl<< "***** creating an Animal pointer to dog" <<std::endl;
const Animal* j = new Dog();

std::cout << "*****" <<std::endl;
std::cout <<std::endl<< "***** creating an Animal pointer to cat" <<std::endl;
const Animal* i = new Cat();
std::cout << "*****" <<std::endl;
Cat cat1;
std::cout << "*****" <<std::endl;
std::cout << "*****" <<std::endl;

std::cout << j->getType() << " j  make sound" << std::endl;
j->makeSound();
std::cout << "*****" <<std::endl;
std::cout << "*****" <<std::endl;
std::cout << std::endl;
std::cout << i->getType() << " i  makes sound" << std::endl;
i->makeSound();
std::cout << "*****" <<std::endl;
std::cout << "*****" <<std::endl;
std::cout << std::endl;
std::cout << cat1.getType() << " cat1 makes sound" << std::endl;
cat1.makeSound();std::cout << "*****" <<std::endl;
std::cout << std::endl;
meta->makeSound();

delete j;
std::cout << "*****" <<std::endl;
delete i;
std::cout << "*****" <<std::endl;
delete meta;
std::cout << "*****" <<std::endl;

const WrongAnimal* wrongmeta = new WrongAnimal();
const WrongAnimal* k = new WrongCat();
WrongCat Wrcat;
std::cout << "*****" <<std::endl;
std::cout << "*****" <<std::endl;

std::cout << Wrcat.getType() << " Wrcat instantiated as WrongCat makes sound " << std::endl;
Wrcat.makeSound();
std::cout << "*****" <<std::endl;
std::cout << "*****" <<std::endl;
std::cout << std::endl;
std::cout << k->getType() << " instantiated as pointer to WrongAnimal " << std::endl;
k->makeSound();
std::cout << "*****" <<std::endl;
std::cout << "*****" <<std::endl;
std::cout << std::endl;
std::cout <<wrongmeta->getType() << " instantiated as pointer to WrongAnimal " << std::endl;
wrongmeta->makeSound();
std::cout << "*****" <<std::endl;
std::cout << "*****" <<std::endl;

delete k;
delete wrongmeta;
return 0;
}