/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:18:57 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/04 10:42:58 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ScalarConverter
{
	public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &copy);
	ScalarConverter &operator=(const ScalarConverter &rhs);
	
	void convert(std::string str);
	
};