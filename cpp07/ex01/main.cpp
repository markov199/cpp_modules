/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:08:30 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/18 07:38:15 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<functional>
#include"iter.hpp"


template <typename T> void increment(T a)
{
    a = a + 1;
}

int main (void)
{
    char array[3] = {'a', 'f', 'k'}
    iter(array, 3, &increment);
  
}


template <typename T> void increment(T a)
{
    a = a + 1;
}

int main (void)
{
    char array[3] = {'a', 'f', 'k'}
    iter(array, 3, &increment);
  
}


template <typename T> void increment(T a)
{
    a = a + 1;
}

int main (void)
{
    char array[3] = {'a', 'f', 'k'};
    iter(array, 3, &increment);
  
}
void increment(int &a)
{
	++a;
}


template <typename T> void increment(T a)
{
    a = a + 1;
}

int main (void)
{
    char array[3] = {'a', 'f', 'k'};
    iter(array, 3, &increment);
  
}


int main()
{
	int arr[3] = {3, 2, 3};

	iter(arr, 3, &increment);
	for(int i = 0; i < 3; i++)
	std::cout << arr[i] << std::endl;
}