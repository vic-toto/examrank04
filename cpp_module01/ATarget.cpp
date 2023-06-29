#include "ATarget.hpp"

ATarget::ATarget(std::string const &type)
{
        this->type = type;
}

ATarget::ATarget() {}
ATarget::~ATarget() {}
std::string const &ATarget::getType() const {return this->type;}

void	ATarget::getHitBySpell(ASpell const &spell)
{
	std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}
