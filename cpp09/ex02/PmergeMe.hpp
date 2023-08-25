/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:50:39 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/17 14:32:30 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# include<iostream>
# include<cstdlib>
# include<utility>
# include<sstream>
#include<sys/time.h>
#include<iomanip>
# include<algorithm>
# include<functional>
# include<vector>
# include<deque>





 
class PmergeMe
{
	private:
		PmergeMe();
		std::vector<int> _inputVec;
		std::vector<std::pair<int, int> > _pairedVec;
		std::vector<int> _myVector;
		std::deque<int> _myDeque;
		unsigned long _timeVectorSort;
		unsigned long _timeDequeSort;
		int _numOfArgs;
		void display();
		void fjSortVector();
		void fjSortDeque();
		static bool comparePair(const std::pair<int, int> &p1, const std::pair<int, int> &p2);

	public:
		PmergeMe(std::vector<int> input);
		~PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &rhs);
		void fjSort();
};

#endif