/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:08:30 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/22 07:29:53 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"iter.hpp"

// int main (void)
// {
//     char array[3] = {'a', 'f', 'k'};
//     int nums[5] = {1, 2, 3, 4, 5};
//     iter(array, 3, &increment);
//     for (int i =0; i < (int)sizeof(array); i++)
//         std::cout << array[i] << ", ";
//     std::cout << std::endl;
//     iter(nums, 5, &increment);
//     for (int i =0; i < 5; i++)
//         std::cout << nums[i] << ", ";
//     std::cout << std::endl; 
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print(const T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print< const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}
