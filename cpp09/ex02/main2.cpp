/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:40:52 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/10 12:12:50 by mkovoor          ###   ########.fr       */
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
# include"PmergeMe.hpp"



int main(int argc, char *argv[])
{
	
	std::vector<int> inputVec;
    float args;
	int numOfPairs;

	numOfPairs =(argc - 1) / 2;
	
    for (int i = 1; i < argc; i++)
    {
        args = atof(argv[i]);
		inputVec.push_back(args);
    }
	PmergeMe fjSort(inputVec);

	fjSort.FjSort();
}

