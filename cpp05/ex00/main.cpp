/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:32:54 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/21 12:38:20 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include"bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bcrat(b1,100);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}