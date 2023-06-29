#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

class ASpell;
class ATarget;

class	Warlock{

	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock(const Warlock &other);
		Warlock &operator=(Warlock const &other);
		std::map<std::string, ASpell *> map;
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void	setTitle(std::string const &title);
		void introduce() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spell);
		void launchSpell(std::string spellName, ATarget const &target);
};


#endif
