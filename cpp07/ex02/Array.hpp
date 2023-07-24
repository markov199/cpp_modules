/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:08:36 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/22 11:09:18 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>
#include<stdexcept>

template <typename T> class Array
{
    T *_ptr;
    unsigned int _size;

    public:
        Array();
        Array(unsigned int size);
        Array(const Array &copy);
        Array &operator=(const Array &rhs);
        const T &operator[](unsigned int index) const;
        T &operator[](unsigned int index);
        ~Array();
        unsigned int size() const;
        class InvalidIndex: public std::exception
        {
            public:
                const char *what() const throw();
        };
};

#include"Array.tpp"

#endif
