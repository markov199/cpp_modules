/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:18:11 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/26 12:42:16 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
	
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(Container C):std::stack<T, Container>(C)
{

}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{

}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &copy):std::stack<T, Container>(copy.c)
{
	*this = copy;
}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack<T, Container> &rhs)
{
	this->c = rhs.c;
	return (*this);
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
	return (this->c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
	return (this->c.end());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::constIterator MutantStack<T, Container>::begin() const
{
	return (this->c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::constIterator MutantStack<T, Container>::end() const
{
	return (this->c.end());
}
