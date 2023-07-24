/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:08:41 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/22 11:21:54 by mkovoor          ###   ########.fr       */
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
	// numarr[-1] = 12;     
    try
	{
		numarr[55] = 405; //checking invalid index
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	int size = numarr.size();
    std::cout << "-----Values of numarr-----" <<std::endl;
    for (int i = 0; i < size ; i++)
        std::cout << numarr[i] <<std::endl;
        
    //copy constructor showing deep copy
    std::cout << "-----Values of numarr2, copied from numarrr with copy constructor-----" <<std::endl;
    Array<int> numarr2(numarr);
    for (int i = 0; i < (int) numarr2.size() ; i++)
        std::cout << numarr2[i] <<std::endl;
	
            
    // checking if deep copy
    std::cout << "-----Checking if deep copy-----" <<std::endl;
    numarr[1] = 55;
    std::cout << numarr[1] <<std::endl;
    std::cout << numarr2[1] <<std::endl;

	Array<int> myarr;
	Array<int> copy = myarr;
	Array<int> * a = new Array<int>();
	*a = numarr2;
	std::cout << "new Test\n";
	for (int i = 0; i < (int) a->size() ; i++)
        std::cout << (*a)[i] <<std::endl;

	Array<int> green(2147483649);
	unsigned int num = 2147483648;
	green[num] = 99;
	std::cout<< green[num];
	delete a;
	


    // std::cout  <<std::endl;
    // std::cout << "======STRING ARRAYS======" <<std::endl;
    // Array<std::string> strarr(4);
    // strarr[0] = "abc";
    // strarr[1] = "def";
    // strarr[2] = "ghi";
    // strarr[3] = "jkl";
    // std::cout << "-----Values of string array-----" <<std::endl;
    // size = strarr.size();
    // for (int i = 0; i < size ; i++)
    //     std::cout << strarr[i] <<std::endl;

    // std::cout << "-----Values of strarr2, copied from strarrr with = operator-----" <<std::endl;
    // Array<std::string> strarr2;
    // strarr2 = strarr;
    // for (int i = 0; i < size ; i++)
    //     std::cout << strarr2[i] <<std::endl;
    // // checking if deep copy
    // std::cout << "-----Checking if deep copy-----" <<std::endl;
    // strarr[1] = "test";
    // std::cout << strarr[1] <<std::endl;
    // std::cout << strarr2[1] <<std::endl;
    // return 0;
}

// #include <iostream>
// #include<time.h>
// #include<ctime>
// #include<cstdlib>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
    
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
    

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] !=test[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL -1 ] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }