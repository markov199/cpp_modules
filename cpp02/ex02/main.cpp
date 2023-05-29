/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 07:42:46 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/14 14:51:16 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include"Fixed.hpp"

int main( void ) {
Fixed a;
Fixed c(5.15f) ;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << c << std::endl;

std::cout << "a = " << a << std::endl;
std::cout << "++a = " << ++a << std::endl;
std::cout << "a = " << a << std::endl;
std::cout << "a++ = " << a++ << std::endl;
std::cout << "a = " << a << std::endl;
std::cout << "b = " << b << std::endl;
std::cout << "max(a,b)" << Fixed::max( a, b ) << std::endl;
if (a > b)
	std::cout << "a is greater than b" << std::endl;
else 
	std::cout << "a is less than b" << std::endl;

return 0;
}

// int main( void ) {
// Fixed a = 0;
// Fixed c(5.15f) ;
// Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );

// std::cout << " a + c" << a + c << std::endl;
// std::cout << " a - c" << a - c << std::endl;

// std::cout << "a = " << a << std::endl;
// std::cout << "pre  = " << --a << std::endl;
// std::cout << "a = " << a << std::endl;
// std::cout << "post = " << a-- << std::endl;
// std::cout << "a = " << a << std::endl;
// std::cout << "b = " << b << std::endl;
// std::cout << "min(a,b)= " << Fixed::min( a, b ) << std::endl;
// return 0;
// if (a < b)
// 	std::cout << "a is lessr than b" << std::endl;
// else 
// 	std::cout << "a is greater than b" << std::endl;

// }