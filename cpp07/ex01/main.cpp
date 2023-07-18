/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:08:30 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/13 16:26:00 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<functional>
#include"iter.hpp"
void increment(int &a)
{
	++a;
}


int main()
{
	int arr[3] = {3, 2, 3};

	iter(arr, 3, &increment);
	for(int i = 0; i < 3; i++)
	std::cout << arr[i] << std::endl;
}