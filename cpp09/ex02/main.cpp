/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:44:00 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/04 09:44:02 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<deque>
#include<list>
#include<queue>
#include<algorithm>
#include<sstream>
#include<functional>


int main(int argc, char *argv[])
{
    std::stringstream input;
    float args;
    for (int i = 1; i < argc; i++)
    {
        args = atof(argv[i]);
        input << args << " ";
    }
    std::cout << input.str();
}