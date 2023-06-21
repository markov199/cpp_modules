/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 08:13:18 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/21 08:50:27 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;

class Form
{
	private:

		const std::string  _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExec;
		Form();
	
	public:
		Form(std::string name, int signGrade, int execGrade);
		~Form();
		std::string getName();
		bool getIsSigned();
		int getGradeToSign();
		int getGradeToExec();

		bool beSigned(Bureaucrat *bureaucrat);
}
 std::ostream &operator<<(Form *form);
#endif