#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <iostream>
class 	ATarget;
class	ASpell{

	protected:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(ASpell const &other);
		ASpell &operator=(ASpell const &other);
		std::string const &getName() const;
		std::string const &getEffects() const;
		~ASpell();

		virtual ASpell *clone(ASpell const &copy) const = 0;

		void launch(const ATarget &target);
};
#include "ATarget.hpp"
#endif
