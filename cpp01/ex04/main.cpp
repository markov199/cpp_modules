/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:43:42 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/07 13:40:04 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"main.hpp"

int main (int ac, char *av[])
{
	std::string inFile;
	std::string outFile;
	std::string str1;
	std::string str2;
	std::string fileContent;
	size_t	pos;

	if (ac == 4)
	{
		inFile = av[1];
		str1 = av[2];
		if (str1.empty())
		{
			std::cout << "Cannot replace an empty string" << std::endl;
			return (EXIT_FAILURE);		
		}
		str2 = av[3];
		std::ifstream ifs(inFile);
		outFile = inFile + ".replace";
		if (ifs.is_open())
		{
			std::ofstream ofs(outFile);
			if (std::getline(ifs, fileContent, '\0'))
			{
				pos = fileContent.find(str1);
				while (pos != std::string::npos)
				{
					fileContent.erase(pos, str1.length());
					fileContent.insert(pos,str2);
					pos = fileContent.find(str1, (pos + str2.length()));
				}
				ofs << fileContent;
				ofs.close();
			}
			ifs.close();			
		}
		else
		{
			std::cerr << " Error in opening file" << std::endl;
			exit (EXIT_FAILURE);
		}		
	}
	else
	{
		std::cout << "Please enter 3 arguments \n'file' 'string1 ' 'string2'\n'string2' will replace every occurence of 'string1' in 'file'" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);

}