#include "ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects)
{
        this->name = name;
        this->effects = effects;
}

ASpell::ASpell() {}
ASpell::~ASpell() {}
std::string const &ASpell::getName() const {return this->name;}
std::string const &ASpell::getEffects() const {return this->effects;}

void	ASpell::launch(const ATarget &target)
{
	target.getHitBySpell((*this));
}
