/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:50:34 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/14 13:30:41 by mkovoor          ###   ########.fr       */
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
	for (std::vector<std::pair<int, int> >::iterator pairedVecIt = pairedVec.begin(); pairedVecIt != pairedVec.end(); pairedVecIt++)
	std::cout << pairedVecIt->first << "," << pairedVecIt->second << "  ";
	std::cout << '\n';

}

PmergeMe::~PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	this->inputVec = copy.inputVec;
	this->pairedVec = copy.pairedVec;
	this->numOfArgs = copy.numOfArgs;
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
	FjSortDeque();   
	display();

}


void PmergeMe::FjSortDeque()
{
	struct timeval start, end ;
	std::vector<std::pair<int, int> >::iterator pairedVecIt;
	int jacobsthalSequence[] = {3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461};
	int numOfPairs = numOfArgs / 2;
	for (int i = 0; i < numOfPairs; i++)
	{
		if ( i == 0)
		{
			myDeque.push_back(pairedVec[i].first);
			myDeque.push_back(pairedVec[i].second);			
		}
		else
			myDeque.push_back(pairedVec[i].second);
	}
	gettimeofday(&start, NULL);
	int sortedIndex = 0;
	for (int j = 0; jacobsthalSequence[j] - 1 < numOfPairs; j++)
	{
		int index = jacobsthalSequence[j];
		int length = index + sortedIndex;
		for (int i = index - 1; i > sortedIndex; i--)
		{
			
			pairedVecIt = pairedVec.begin();
			myDeque.insert(std::lower_bound(myDeque.begin(),myDeque.begin() + length, (pairedVecIt + i)->first), (pairedVecIt + i)->first);
		}
		sortedIndex = index - 1;
	}
	while (sortedIndex++ < numOfPairs -1)
	{
		pairedVecIt = pairedVec.begin();
		myDeque.insert(std::lower_bound(myDeque.begin(), myDeque.end(), (pairedVecIt + sortedIndex)->first), (pairedVecIt + sortedIndex)->first);
	}
	if (numOfArgs % 2)
		myDeque.insert(std::lower_bound(myDeque.begin(), myDeque.end(), inputVec[numOfArgs - 1]),inputVec[numOfArgs - 1]);
	gettimeofday(&end, NULL);
 
    timeDequeSort = (end.tv_sec - start.tv_sec) * 1e6;
    timeDequeSort = (timeDequeSort + (end.tv_usec -
                              start.tv_usec)) ; 
}

void PmergeMe::FjSortVector()
{
	struct timeval start, end ;
	std::vector<std::pair<int, int> >::iterator pairedVecIt;
	int jacobsthalSequence[] = {3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461};	
	int numOfPairs = numOfArgs / 2;

	
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
	gettimeofday(&start, NULL);
	int sortedIndex = 0;
	for (int j = 0; jacobsthalSequence[j] - 1 < numOfPairs; j++)
	{
		int index = jacobsthalSequence[j];
		int length = index + sortedIndex;
		for (int i = index - 1; i > sortedIndex; i--)
		{
			pairedVecIt = pairedVec.begin();
			std::cout << *(myVector.begin() +length ) << "search till for " << (pairedVecIt + i)->first<< "\n";
			myVector.insert(std::lower_bound(myVector.begin(),myVector.begin() +length, (pairedVecIt + i)->first), (pairedVecIt + i)->first);
		}
		sortedIndex = index - 1;
	}
	while (sortedIndex++ < numOfPairs - 1)
	{
		pairedVecIt = pairedVec.begin();
		myVector.insert(std::lower_bound(myVector.begin(), myVector.end(), (pairedVecIt + sortedIndex)->first), (pairedVecIt + sortedIndex)->first);
	}
	if (numOfArgs % 2)
		myVector.insert(std::lower_bound(myVector.begin(), myVector.end(), inputVec[numOfArgs - 1]),inputVec[numOfArgs - 1]);
	gettimeofday(&end, NULL); 
    timeVectorSort = (end.tv_sec - start.tv_sec) * 1e6;
    timeVectorSort = (timeVectorSort + (end.tv_usec -
                              start.tv_usec) ) ;

}

bool PmergeMe::comparePair(const std::pair<int, int> &p1, const std::pair<int, int> &p2)
{
	return (p1.second < p2.second);
}

void PmergeMe::display(void)
{
	// std::cout << "\nBefore:  " ;
	// for(std::vector<int>::iterator vItr = inputVec.begin(); vItr != inputVec.end(); vItr++)
	// std::cout << *vItr << " ";

	if (std::is_sorted(myDeque.begin(), myDeque.end()) &&std::is_sorted(myVector.begin(), myVector.end()))
	{
		std::cout << "\nAfter:   " ;
		for(std::vector<int>::iterator vItr = myVector.begin(); vItr != myVector.end(); vItr++)
		std::cout << *vItr << " ";
		// for(std::deque<int>::iterator vItr = myDeque.begin(); vItr != myDeque.end(); vItr++)
		// std::cout << *vItr << " ";
		std::cout << "\n\nTime taken vector is : " << std::fixed << timeVectorSort << std::setprecision(6);
    	std::cout << " us" << std::endl;
		 std::cout << "Time taken by deque is : " << std::fixed << timeDequeSort << std::setprecision(6);
    	std::cout << " us" << std::endl;

	}
	else 
	std::cout << "ERROR :: not sorted\n";


}

// for (std::vector<std::pair<int, int> >::iterator pairedVecIt = pairedVec.begin(); pairedVecIt != pairedVec.end(); pairedVecIt++)
// 	std::cout << pairedVecIt->first << "," << pairedVecIt->second << "  ";
// 	std::cout << '\n';
