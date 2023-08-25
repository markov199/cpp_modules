/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:40:52 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/17 14:36:33 by mkovoor          ###   ########.fr       */
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
	
	if(argc > 2)
	{
		for (int i = 1; i < argc; i++)
		{
			args = atof(argv[i]);
			inputVec.push_back(args);
		}
		PmergeMe fjSort(inputVec);
		fjSort.fjSort();
	}
	else
		std::cout << "Wrong number of arguments. Please enter in following format\n./PmergeMe num1 num2 [...]";
}

