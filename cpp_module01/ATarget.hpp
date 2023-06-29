#ifndef ATARGET_HPP
#define ATARGET_HPP
#include <iostream>
class ASpell;

class	ATarget{

	protected:
		std::string	type;
	public:
		ATarget();
		~ATarget();
		ATarget(ATarget const &other);
		ATarget &operator=(ATarget const &other);
		ATarget(std::string const &type);
		std::string const &getType() const;
		virtual ATarget *clone(ATarget const &copy) const = 0;
		void	getHitBySpell(ASpell const &spell);
};

#include "ASpell.hpp"
#endif

