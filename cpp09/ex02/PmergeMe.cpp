/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:50:34 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/21 15:03:26 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<deque>
#include<list>
#include<queue>
#include<algorithm>
#include<iterator>
#include<vector>
#include<sstream>
#include<functional>
# include"PmergeMe.hpp"

PmergeMe::PmergeMe() // put to follow cannonical form
{

}


PmergeMe::PmergeMe(std::vector<int> input):_inputVec(input), _numOfArgs(input.size())
{
	int argc = _inputVec.size();
	for (int i = 1; i < argc; i +=2)
	{
		if (_inputVec[i] < _inputVec[i - 1])
			_pairedVec.push_back(std::make_pair(_inputVec[i], _inputVec[i - 1]));
		else
			_pairedVec.push_back(std::make_pair(_inputVec[i - 1], _inputVec[i]));
	}
	std::sort(_pairedVec.begin(), _pairedVec.end(), comparePair);
}

PmergeMe::~PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	this->_inputVec = copy._inputVec;
	this->_pairedVec = copy._pairedVec;
	this->_numOfArgs = copy._numOfArgs;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
	if (this != &rhs)
	{
		this->_inputVec = rhs._inputVec;
		this->_pairedVec = rhs._pairedVec;
		this->_numOfArgs = rhs._numOfArgs;
	}
	return (*this);
}

void PmergeMe::fjSort()
{
	fjSortVector();
	fjSortDeque();   
	display();

}


void PmergeMe::fjSortDeque()
{
	struct timeval start, end ;
	std::vector<std::pair<int, int> >::iterator pairedVecIt;
	int jacobsthalSequence[] = {3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845};
	int numOfPairs = _numOfArgs / 2;
	for (int i = 0; i < numOfPairs; i++)
	{
		if ( i == 0) // main chain has pair(0) first already inserted in the correct place
		{
			_myDeque.push_back(_pairedVec[i].first);
			_myDeque.push_back(_pairedVec[i].second);			
		}
		else
			_myDeque.push_back(_pairedVec[i].second);
	}
	gettimeofday(&start, NULL);
	int sortedIndex = 0;
	for (int j = 0; jacobsthalSequence[j] - 1 < numOfPairs; j++)
	{
		int index = jacobsthalSequence[j];
		int length = index + sortedIndex;
		for (int i = index - 1; i > sortedIndex; i--)
		{			
			pairedVecIt = _pairedVec.begin();
			_myDeque.insert(std::lower_bound(_myDeque.begin(),_myDeque.begin() + length, (pairedVecIt + i)->first), (pairedVecIt + i)->first);
		}
		sortedIndex = index - 1;
	}
	while (sortedIndex++ < numOfPairs -1)
	{
		pairedVecIt = _pairedVec.begin();
		_myDeque.insert(std::lower_bound(_myDeque.begin(), _myDeque.end(), (pairedVecIt + sortedIndex)->first), (pairedVecIt + sortedIndex)->first);
	}
	if (_numOfArgs % 2)
		_myDeque.insert(std::lower_bound(_myDeque.begin(), _myDeque.end(), _inputVec[_numOfArgs - 1]),_inputVec[_numOfArgs - 1]);
	gettimeofday(&end, NULL);
 
    _timeDequeSort = (end.tv_sec - start.tv_sec) * 1e6;
    _timeDequeSort = (_timeDequeSort + (end.tv_usec -
                              start.tv_usec)) ; 
}

void PmergeMe::fjSortVector()
{
	struct timeval start, end ;
	std::vector<std::pair<int, int> >::iterator pairedVecIt;
	int jacobsthalSequence[] = {3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461};	
	int numOfPairs = _numOfArgs / 2;

	
	for (int i = 0; i < numOfPairs; i++)
	{
		if ( i == 0)
		{
			_myVector.push_back(_pairedVec[i].first);
			_myVector.push_back(_pairedVec[i].second);			
		}
		else
			_myVector.push_back(_pairedVec[i].second);
	}
	gettimeofday(&start, NULL);
	int sortedIndex = 0;
	for (int j = 0; jacobsthalSequence[j] - 1 < numOfPairs; j++)
	{
		int index = jacobsthalSequence[j];
		int length = index + sortedIndex;
		for (int i = index - 1; i > sortedIndex -1; i--)
		{
			pairedVecIt = _pairedVec.begin();
			_myVector.insert(std::lower_bound(_myVector.begin(),_myVector.begin() +length, (pairedVecIt + i)->first), (pairedVecIt + i)->first);
		}
		sortedIndex = index - 1;
	}
	while (sortedIndex++ < numOfPairs - 1)
	{
		pairedVecIt = _pairedVec.begin();
		_myVector.insert(std::lower_bound(_myVector.begin(), _myVector.end(), (pairedVecIt + sortedIndex)->first), (pairedVecIt + sortedIndex)->first);
	}
	if (_numOfArgs % 2)
		_myVector.insert(std::lower_bound(_myVector.begin(), _myVector.end(), _inputVec[_numOfArgs - 1]),_inputVec[_numOfArgs - 1]);
	gettimeofday(&end, NULL); 
    _timeVectorSort = (end.tv_sec - start.tv_sec) * 1e6;
    _timeVectorSort = (_timeVectorSort + (end.tv_usec -
                              start.tv_usec) ) ;

}

bool PmergeMe::comparePair(const std::pair<int, int> &p1, const std::pair<int, int> &p2)
{
	return (p1.second < p2.second);
}

void PmergeMe::display(void)
{
	std::cout << "\nBefore:  " ;
	for(std::vector<int>::iterator vItr = _inputVec.begin(); vItr != _inputVec.end(); vItr++)
	std::cout << *vItr << " ";
	std::cout << "\n\nAfter:   " ;
	for(std::vector<int>::iterator vItr = _myVector.begin(); vItr != _myVector.end(); vItr++)
	std::cout << *vItr << " ";
	std::cout << "\n\nTime taken to process range of " <<  this->_numOfArgs <<  " numbers using std::vectors is: " << std::fixed <<  _timeVectorSort << std::setprecision(6);
	std::cout << " us" << std::endl;
		std::cout << "Time taken to process range of " <<  this->_numOfArgs <<  " numbers using std::deque is: "  << std::fixed << _timeDequeSort << std::setprecision(6);
	std::cout << " us" << std::endl;

	if (std::is_sorted(_myDeque.begin(), _myDeque.end()) &&std::is_sorted(_myVector.begin(), _myVector.end()))
		std::cout << "\nSuccess!!\n";
	else
		std::cout << "\n Not sorted((";
}












// for (std::vector<std::pair<int, int> >::iterator pairedVecIt = pairedVec.begin(); pairedVecIt != pairedVec.end(); pairedVecIt++)
// 	std::cout << pairedVecIt->first << "," << pairedVecIt->second << "  ";
// 	std::cout << '\n';
