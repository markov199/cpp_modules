/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:08:41 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/18 07:30:44 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Array.hpp"
int main(void)
{
    std::cout  <<std::endl;
    std::cout << "======INT ARRAYS======" <<std::endl;
    Array<int> numarr(3); //creates an array of 3 elements
    numarr[0] = 42;
    numarr[1] = 43;        
    numarr[2] = 44;
    try
    {
        numarr[55] = 45; //checking invalid index
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    int size = numarr.size();
    std::cout << "-----Values of numarr-----" <<std::endl;
    for (int i = 0; i < size ; i++)
        std::cout << numarr[i] <<std::endl;
        
    //copy constructor showing deep copy
    std::cout << "-----Values of numarr2, copied from numarrr with copy constructor-----" <<std::endl;
    Array<int> numarr2(numarr);
    for (int i = 0; i < size ; i++)
        std::cout << numarr2[i] <<std::endl;
            
    // checking if deep copy
    std::cout << "-----Checking if deep copy-----" <<std::endl;
    numarr[1] = 55;
    std::cout << numarr[1] <<std::endl;
    std::cout << numarr2[1] <<std::endl;


    std::cout  <<std::endl;
    std::cout << "======STRING ARRAYS======" <<std::endl;
    Array<std::string> strarr(4);
    strarr[0] = "abc";
    strarr[1] = "def";
    strarr[2] = "ghi";
    strarr[3] = "jkl";
    std::cout << "-----Values of string array-----" <<std::endl;
    size = strarr.size();
    for (int i = 0; i < size ; i++)
        std::cout << strarr[i] <<std::endl;

    std::cout << "-----Values of strarr2, copied from strarrr with = operator-----" <<std::endl;
    Array<std::string> strarr2;
    strarr2 = strarr;
    for (int i = 0; i < size ; i++)
        std::cout << strarr2[i] <<std::endl;
    // checking if deep copy
    std::cout << "-----Checking if deep copy-----" <<std::endl;
    strarr[1] = "test";
    std::cout << strarr[1] <<std::endl;
    std::cout << strarr2[1] <<std::endl;
    return 0;
}
