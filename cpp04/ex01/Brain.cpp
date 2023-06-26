/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:04:15 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/29 10:01:00 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain():numOfIdeas(0)
{
	std::cout << "Default constructor for Brain called" << std::endl;	
}

Brain::Brain(Brain &copy)
{
	std::cout << "Copy constructor for Brain called" << std::endl;
	
	for(int i = 0; i < copy.numOfIdeas; i++)
		ideas[i] = copy.ideas[i];
	numOfIdeas = copy.numOfIdeas;

}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "operator= for Brain called" << std::endl;
	if (this != &rhs)
	{
		for(int i = 0; i < rhs.numOfIdeas; i++)
			ideas[i] = rhs.ideas[i];
		numOfIdeas = rhs.numOfIdeas;
	}
	return (*this);

}

Brain::~Brain()
{
	std::cout << "Destructor for brain called" <<std::endl;
}

void Brain::setIdea(std::string idea)
{
	if (numOfIdeas < 100)
		ideas[numOfIdeas++] = idea;
	else
		std::cout << "Brain full of ideas!!!" << std::endl;
}

void Brain::getIdea(void)
{
	for (int i = 0; i < numOfIdeas; i++)
		std::cout << "Idea [" << i <<"] -- " << ideas[i] <<  std::endl;
}