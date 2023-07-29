/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:17:58 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/26 12:50:43 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // constructing stacks
#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include<list>
#include"MutantStack.hpp"

// int main ()
// {
// 	std::deque<int> mydeque (3,100);          // deque with 3 elements
// 	std::vector<int> myvector (2,200);        // vector with 2 elements

// 	MutantStack<int> first;                    // empty Mutantstack
// 	MutantStack<int> msecond(mydeque);
// 	MutantStack<int, std::vector<int> > mthird(myvector);

// 	const MutantStack<int, std::vector<int> > mfourth(mthird);

// 	MutantStack<int, std::vector<int> >::constIterator constit = mfourth.begin();
// 	MutantStack<int, std::vector<int> >::constIterator constite = mfourth.end();
// 	++constit;
// 	--constit;
// 	while (constit != constite)
// 	{
// 	std::cout << *constit << std::endl;
// 	++constit;
// 	}

// 	std::cout << "size of first: " << first.size() << '\n';
// 	std::cout << "size of msecond: " << msecond.size() << '\n';
// 	MutantStack<int>::iterator it = msecond.begin();
// 	MutantStack<int>::iterator ite = msecond.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	return 0;
// }

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	{

	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	//[...]
	lstack.push_back(0);
	std::list<int>::iterator it = lstack.begin();
	std::list<int>::iterator ite = lstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	// std::stack<int> s(lstack);
	}
	return 0;
}