/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:04:28 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/12 10:04:33 by mkovoor          ###   ########.fr       */
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
    public:
        Serializer();
        ~Serializer();
        Serializer(const Serializer &copy);
        Serializer &operator=(const Serializer &rhs);
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};