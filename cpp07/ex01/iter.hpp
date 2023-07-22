/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:08:26 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/22 07:28:20 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T> void increment(T &a)
{
    a++;
}

template <typename T> void iter ( T arr[], int len, void (*func) (T const &)) 
{
	for (int i = 0; i < len; i++)
		func(arr[i]);
}
#endif

// template <typename T> void iter ( T arr[], int len, void (*func) (T  &)) 