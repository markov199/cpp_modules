/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:50:34 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/12 12:38:11 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<deque>
#include<list>
#include<queue>
#include<unordered_set>
#include<algorithm>
#include<iterator>
#include<vector>
#include<sstream>
#include<functional>
# include"PmergeMe.hpp"



PmergeMe::PmergeMe(std::vector<int> input):inputVec(input), numOfArgs(input.size())
{
	int argc = inputVec.size();
	for (int i = 1; i < argc; i +=2)
	{
		if (inputVec[i] < inputVec[i - 1])
			pairedVec.push_back(std::make_pair(inputVec[i], inputVec[i - 1]));
		else
			pairedVec.push_back(std::make_pair(inputVec[i - 1], inputVec[i]));
	}
	std::sort(pairedVec.begin(), pairedVec.end(), comparePair);

}

PmergeMe::~PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe &copy)
{

}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
	if (this != &rhs)
	{
		this->inputVec = rhs.inputVec;
		this->pairedVec = rhs.pairedVec;
		this->numOfArgs = rhs.numOfArgs;
	}
	return (*this);
}

void PmergeMe::FjSort()
{
	FjSortVector();
}

void PmergeMe::FjSortSet()
{
	std::vector<std::pair<int, int> >::iterator pairedVecIt;
	std::vector<int>::iterator vecIt;	
	std::unordered_set<int>::iterator itr;
	std::unordered_set<int>::iterator itr2;
	std::pair<std::unordered_set<int>::iterator, bool> ret;


	for (pairedVecIt = pairedVec.begin(); pairedVecIt != pairedVec.end(); pairedVecIt++)
	std::cout << pairedVecIt->first << "," << pairedVecIt->second << "  ";
	std::cout << '\n';
	int jacobsthalSequence[] = {3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461};
	
	int numOfPairs = numOfArgs / 2;

	for (int i = 0; i < numOfPairs; i++)
	{
		if ( i == 0)
		{
			ret = myset.insert(pairedVec[i].first);
			ret = myset.insert(pairedVec[i].second);			
		}
		else
			ret = myset.insert(pairedVec[i].second);
		if (ret.second == 0)
		{
			std::cout << "Error: duplicate elements in list not allowed\n";
			exit (1);
		}
	}
		for (itr = myset.begin(); itr != myset.end(); itr++)
		std::cout << *itr << " ";
	pairedVecIt = pairedVec.begin();
	int sorted = 0;
	for (int j = 0; jacobsthalSequence[j] - 1 < numOfPairs; j++)
	{
		int index = jacobsthalSequence[j] - 1;
			itr2 =myset.find((pairedVecIt + index)->second);
		for (int i = index; i > sorted; i--)
		{
			itr = myset.begin();
			std::cout << "index value " << *itr2 << '\n';
			std::cout << *(std::lower_bound(itr, itr2, (pairedVecIt + i)->first)) << "insert at\n";
			myset.insert(std::lower_bound(itr, itr2, (pairedVecIt + i)->first), (pairedVecIt + i)->first);
		}
		sorted = index;
	}
	// while (sorted < numOfPairs)
	// {
	// 	myset.insert(myset.lower_bound((pairedVecIt + sorted)->first), (pairedVecIt + sorted)->first);
	// 	sorted ++;
	// }
	if (numOfArgs / 2)
		myset.insert(inputVec[numOfArgs - 1]);
	std::cout << "\nBefore: ";
	for (vecIt = inputVec.begin(); vecIt != inputVec.end(); vecIt++)
		std::cout << *vecIt << " ";
	
	std::cout << " \nAfter: ";
	for (itr = myset.begin(); itr != myset.end(); itr++)
		std::cout << *itr << " ";


}

void PmergeMe::FjSortVector()
{
	std::vector<std::pair<int, int> >::iterator pairedVecIt;
	std::vector<int>::iterator vecIt;	
	std::vector<int>::iterator itr;
	std::pair<std::set<int>::iterator, bool> ret;
	int jacobsthalSequence[] = {3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461};
	
	int numOfPairs = numOfArgs / 2;


	for (pairedVecIt = pairedVec.begin(); pairedVecIt != pairedVec.end(); pairedVecIt++)
	std::cout << pairedVecIt->first << "," << pairedVecIt->second << "  ";
	std::cout << '\n';
	for (int i = 0; i < numOfPairs; i++)
	{
		if ( i == 0)
		{
			myVector.push_back(pairedVec[i].first);
			myVector.push_back(pairedVec[i].second);			
		}
		else
			myVector.push_back(pairedVec[i].second);
	}
	for (vecIt = myVector.begin(); vecIt != myVector.end(); vecIt++)
		std::cout << *vecIt << " ";
		std::cout << '\n';
	pairedVecIt = pairedVec.begin();
	int sorted = 0;
	for (int j = 0; jacobsthalSequence[j] - 1 < numOfPairs; j++)
	{
		int index = jacobsthalSequence[j];
		for (int i = index - 1; i > sorted; i--)
		{
			std::cout << "in array till " << *(myVector.begin() + index) << '\n';

			std::cout << "inserting " << (pairedVecIt + i)->first << " at " << *(std::lower_bound(myVector.begin(),myVector.begin() + index, (pairedVecIt + i)->second)) << "\n";
			myVector.insert(std::lower_bound(myVector.begin(),myVector.begin() + index, (pairedVecIt + i)->first), (pairedVecIt + i)->first);
			std::cout << "sorted " << sorted << " " << index << "index and i " << i << "\n";

		}
			sorted = index - 1;
	}
	for (vecIt = myVector.begin(); vecIt != myVector.end(); vecIt++)
		std::cout << *vecIt << " ";
		std::cout << '\n';
	while (sorted < numOfPairs - 1)
	{
		myVector.insert(std::lower_bound(myVector.begin(), myVector.end(), (pairedVecIt + sorted)->first), (pairedVecIt + sorted)->first);
		sorted ++;
	}
	if (numOfArgs / 2)
		myVector.insert(std::lower_bound(myVector.begin(), myVector.end(), inputVec[numOfArgs - 1]),inputVec[numOfArgs - 1]);

	std::cout << " \nAfter: ";
	for (vecIt = myVector.begin(); vecIt != myVector.end(); vecIt++)
		std::cout << *vecIt << " ";
		std::cout << '\n';
	// std::cout << "\nBefore: ";
	// for (vecIt = inputVec.begin(); vecIt != inputVec.end(); vecIt++)
	// 	std::cout << *vecIt << " ";
	
	// for (itr = myset.begin(); itr != myset.end(); itr++)
	// 	std::cout << *itr << " ";


}

bool PmergeMe::comparePair(const std::pair<int, int> &p1, const std::pair<int, int> &p2)
{
	return (p1.second < p2.second);
}
