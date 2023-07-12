/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:07:13 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/12 08:20:07 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include<stdexcept>
#include <cstdlib>
#include"Base.hpp"
#include"A.hpp"
#include"B.hpp"
#include"C.hpp"

void identify(Base* p);
void identify(Base& p);

Base *makeA()
{ 
	std::cout <<"A\n";
	return (new A);
}

Base *makeB()
{
	std::cout << "B\n";
	return (new B);
}

Base *makeC()
{
	std::cout << "C\n";
	return (new C);
}

Base *(*pfn[3])() = {&makeA, &makeB, &makeC};

Base *generate(void)
{
	srand(time(0));
	int i = rand() % 3;
	std::cout << "In generate function\n";
	return (pfn[i]());
}
void identify(Base* p)
{
	A *ptr = dynamic_cast<A *>(p);
	if (ptr)
		std::cout << "A class\n";
	B *ptr2 = dynamic_cast<B *>(p);
	if (ptr2)
		std::cout << "B class\n";
	C *ptr3 = dynamic_cast<C *>(p);
	if (ptr3)
		std::cout << "C class\n";
}

void identify(Base &p)
{
	try
	{
		A child = dynamic_cast<A &>(p);
		std::cout << "A class(ref)\n";
	}
	catch(std::exception &e){}
	try
	{
		B child = dynamic_cast<B &>(p);
		std::cout << "B class(ref)\n";
	}
	catch(std::exception &e){}
	try
	{
		C child = dynamic_cast<C &>(p);
		std::cout << "C class (ref)\n";
	}
	catch(std::exception &e){}
}

int main(void)
{
	Base *baseptr;
	baseptr = dynamic_cast<Base *>( pfn[0]());
	identify(baseptr);
	identify(*baseptr);
	baseptr = dynamic_cast<Base *>(pfn[1]());
	identify(baseptr);
	identify(*baseptr);
	baseptr = dynamic_cast<Base *>(pfn[2]());
	identify(baseptr);
	identify(*baseptr);

    baseptr = dynamic_cast<Base *>(generate());
	identify(*baseptr);
	identify(baseptr);


}

