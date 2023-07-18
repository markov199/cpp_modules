/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:04:28 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/13 09:45:13 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdint.h>
#include<iostream>

struct Data
{
    int i;
    char a;
    char b;
    char c;
    char d;
};

class Serializer
{
        Serializer();
        ~Serializer();
        Serializer(const Serializer &copy);
        Serializer &operator=(const Serializer &rhs);
    public:
        uintptr_t static serialize(Data* ptr);
        Data static *deserialize(uintptr_t raw);
};