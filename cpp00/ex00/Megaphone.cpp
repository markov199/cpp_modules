/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:19:20 by mkovoor           #+#    #+#             */
/*   Updated: 2023/02/27 14:03:27 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main (int ac , char *av[])
{
	int	i;
	int	j;
	
	
	i = 1;
	if (ac == 1)
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
				std::cout << static_cast<char>(toupper(int(av[i][j++])));
			i++;
		}
		std::cout << std::endl;
	}
}

