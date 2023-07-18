/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:08:26 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/13 16:25:29 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include<functional>
#include<iostream>

template <typename T> void iter (T arr[],int len,  void (*func)(T &))
{
	for (int i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}
#endif