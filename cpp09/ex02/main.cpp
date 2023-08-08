/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:44:00 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/08 14:29:36 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<iostream>
#include<utility>
# include<vector>
# include<set>
# include<deque>
# include<list>
# include<queue>
# include<algorithm>
# include<sstream>
# include<functional>

bool comparePair(const std::pair<int, int> &p1, const std::pair<int, int> &p2)
{
	return (p1.second < p2.second);
}

int main(int argc, char *argv[])
{
	int jacobsthalSequence[] = {3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461};
	std::vector<int> inputVec;
	std::vector<int>::iterator vecIt;
	std::vector<std::pair<int, int> > pairedVec;
	std::vector<std::pair<int, int> >::iterator pairedVecIt;
	
	std::set<int> myset;
	std::set<int>::iterator itr;
	std::pair<std::set<int>::iterator, bool> ret;

    float args;
	int numOfPairs;
	numOfPairs =(argc - 1) / 2;
	std::cout << numOfPairs << "pairs\n";
    for (int i = 1; i < argc; i++)
    {
        args = atof(argv[i]);
		inputVec.push_back(args);
    }
	for (int i = 1; i < argc - 1; i +=2)
	{
		if (inputVec[i] < inputVec[i - 1])
			pairedVec.push_back(std::make_pair(inputVec[i], inputVec[i - 1]));
		else
			pairedVec.push_back(std::make_pair(inputVec[i - 1], inputVec[i]));
	}
	std::cout << "\npaired vector\n";
	for (int i = 0; i < numOfPairs; i++)
			std::cout << pairedVec[i].first << ',' <<  pairedVec[i].second << " ";
	sort (pairedVec.begin(), pairedVec.end(), comparePair);
	
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
	pairedVecIt = pairedVec.begin();
	int sorted = 1;

		int index = *jacobsthalSequence;
		while (int index = *jacobsthalSequence;index < numOfPairs; index = *(jacobsthalSequence++))
		{
			int i = index;
			while (sorted  < )
			{
				std::cout <<  " \ninsert this" << (pairedVecIt + i + 1 )->first << " ??\n";
				myset.insert(myset.find((pairedVecIt + i)->second), (pairedVecIt + index + 1 )->first) ;
				i--;
			}
			sorted = index;
		}
		while (sorted < numOfPairs)
		{
			
		}
	// {
	// 	int index = 0;
	// 	pairedvecIt + jacobsthalSequence[0]
		
	// }
	std::cout << " \nmainset\n";
	for (itr = myset.begin(); itr != myset.end(); itr++)
		std::cout << *itr << " ";
	std::cout << "\n sorted paired vector\n";
	for (int i = 0; i < numOfPairs; i++)
			std::cout << pairedVec[i].first << ',' <<  pairedVec[i].second << " ";
}


