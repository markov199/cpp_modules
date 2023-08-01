/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:53:57 by mkovoor           #+#    #+#             */
/*   Updated: 2023/08/01 14:59:11 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include<iostream>
#include<stack>

class RPN
{
	private:
		RPN();
		~RPN();
		RPN(const RPN &copy);
		RPN &operator=(const RPN &rhs);
		static void doOperation(char c, std::stack<int> numberstack);

	public:
		static void calculate(std::string expression);
};
#endif