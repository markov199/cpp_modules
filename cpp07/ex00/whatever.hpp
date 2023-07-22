/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:03:53 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/18 12:44:07 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T> void swap (T &a, T &b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;	
}

template <typename T> T min (T a, T b)
{
	return ((a < b) ? a: b);
}

template <typename T> T max (T a, T b)
{
	return ((a > b) ? a: b);
}

#endif