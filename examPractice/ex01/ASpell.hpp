#ifndef ASPELL_HPP
#define ASPELL_HPP

#include<iostream>
#include"ATarget.hpp"


class ASpell
{
	protected:
		std::string _name;
		std::string _effects;

	public:
		virtual ~ASpell();
		ASpell();
		ASpell(std::string name, std::string effects);
		ASpell(const ASpell &copy);
		ASpell &operator=(const ASpell &rhs);


		virtual ASpell *clone() const = 0;
		std::string getName() const;
		std::string getEffects() const;
		void launch(const ATarget &target);

};

#endif