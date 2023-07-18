/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:08:36 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/18 07:37:11 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>
#include<stdexcept>

template <typename T> class Array
{
    T *_ptr;
    int _size;

    public:
        Array();
        Array(unsigned int size);
        Array(const Array &copy);
        Array &operator=(const Array &rhs);
        T &operator[](int index) const;
        ~Array();
        unsigned int size() const;
        class InvalidIndex: public std::exception
        {
            public:
                const char *what() const throw();
        };
};

template <typename T> const char *Array<T>::InvalidIndex::what() const throw()
{
    return ("Invalid Index.");
}

template <typename T> unsigned int Array<T>::size() const
{
    return (_size);
}

template <typename T> Array<T>::Array():_ptr(NULL), _size(0)
{

}

template <typename T> Array<T>::Array(unsigned int size):_ptr(NULL), _size(size)
{
    if (_size != 0)
    try
    {
        _ptr = new T[_size] (); //initialising array to default (0) value
        std::cout << "constructor with size called \n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
}

template <typename T> Array<T>::Array(const Array &copy)
{
    // delete[] this->_ptr;
    // this->_ptr = NULL;
    try
    {
        this->_ptr = new T[copy._size] ();
        this->_size = copy._size;
        for (int i = 0; i < this->_size; i++)
            this->_ptr[i] = copy._ptr[i];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

template <typename T> T &Array<T>::operator[](int index) const
{
      if (index < 0 || index >= _size)
            throw InvalidIndex();
        return (_ptr[index]);            
}

template <typename T> Array<T> &Array<T>::operator=(const Array &rhs)
{
    if(this != &rhs)
    {
        try
        {
        delete[] this->_ptr;
        this->_ptr = new T[rhs._size] ();
        this->_size = rhs._size;
        for (int i = 0; i < this->_size; i++)
            this->_ptr[i] = rhs._ptr[i];
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }     
    }
    return (*this);
}

template <typename T> Array<T>::~Array()
{
    delete[] _ptr; //no need for if(ptr) as C++ does nothing if ptr is null 
    _ptr = NULL; //deleting a ptr twice has undifined behaviour  C++ does nothing if ptr is null 
}
#endif
