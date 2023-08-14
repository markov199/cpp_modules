/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:50:39 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/14 13:01:28 by mkovoor          ###   ########.fr       */
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
		std::vector<int> inputVec;
		std::vector<std::pair<int, int> > pairedVec;
		std::vector<int> myVector;
		std::deque<int> myDeque;
		int numOfArgs;
		void display();
		void FjSortVector();
		void FjSortDeque();
		unsigned long timeVectorSort;
		unsigned long timeDequeSort;
		static bool comparePair(const std::pair<int, int> &p1, const std::pair<int, int> &p2);

	public:
		PmergeMe(std::vector<int> input);
		~PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &rhs);
		void FjSort();
};

#endif