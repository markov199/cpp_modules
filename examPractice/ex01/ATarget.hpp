#ifndef ATarget_HPP
#define ATarget_HPP

#include<iostream>
#include<map>
#include"ASpell.hpp"

class ATarget
{
	protected:
		std::string _type;
	
	public:
		~ATarget();
		ATarget();
		ATarget(std::string type);
		ATarget(const ATarget &copy);
		ATarget &operator=(const ATarget &rhs);


		virtual ATarget *clone() const = 0;
		std::string getType() const;
		
		void getHitBySpell(const ASpell &spell) const;

};

#endif