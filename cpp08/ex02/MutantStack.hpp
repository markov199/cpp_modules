/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:18:08 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/26 12:47:14 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include<iostream>
#include<stack>
#include<iterator>


template <typename T, typename Container = std::deque<T> > 
class MutantStack: public std::stack<T, Container>
{
	public:
		MutantStack();
		MutantStack(Container C);
		~MutantStack();
		MutantStack(const MutantStack &copy);
		MutantStack &operator=(const MutantStack &rhs);
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator constIterator;
		iterator begin();
		iterator end();		
		constIterator begin() const;
		constIterator end() const;		
};

#include "MutantStack.tpp"

#endif