#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include<iostream>
#include"ASpell.hpp"
#include"ATarget.hpp"

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		std::map<std::string, ASpell *> _mySpells;
		Warlock();
		Warlock(const Warlock &copy);
		Warlock &operator=(const Warlock &rhs);

	public:
		~Warlock();
		Warlock(std::string name, std::string title);

		const std::string getName() const;
		const std::string getTitle() const;
		void setTitle(std::string title);

		void introduce() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, const ATarget &theTarget);
};

#endif