/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:08:30 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/12 10:33:07 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
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

