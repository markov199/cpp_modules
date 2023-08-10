/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:50:39 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/10 14:58:33 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# include<iostream>
# include<cstdlib>
# include<utility>
# include<sstream>
# include<algorithm>
# include<functional>
# include<vector>
# include<set>
# include<deque>
# include<list>
# include<queue>



 
class PmergeMe
{
	private:
		std::vector<int> inputVec;
		std::vector<std::pair<int, int> > pairedVec;
		std::set<int> myset;
		std::vector<int> myVector;
		int numOfArgs;

	public:
		PmergeMe(std::vector<int> input);
		~PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &rhs);
		void FjSort();
		void FjSortSet();
		// void FjSortVector();
		static bool comparePair(const std::pair<int, int> &p1, const std::pair<int, int> &p2);
};

#endif