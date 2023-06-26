/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:04:10 by mkovoor           #+#    #+#             */
/*   Updated: 2023/03/29 13:48:28 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>

class Brain
{
	
	public:
        Brain();
		std::string ideas[100];
		int numOfIdeas;
        Brain(Brain &copy);
        Brain &operator=(const Brain &rhs);
		void setIdea(std::string idea);
		void getIdea(void);
        ~Brain();
};

#endif