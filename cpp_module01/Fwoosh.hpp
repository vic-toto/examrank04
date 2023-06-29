#ifndef FWOOSH_HPP
#define FWOOSH_HPP
#include "ASpell.hpp"
class ASpell;

class Fwoosh : public ASpell
{	
	public:
	Fwoosh();
	~Fwoosh();
virtual Fwoosh *clone(Fwoosh &copy) const;
};
#endif

