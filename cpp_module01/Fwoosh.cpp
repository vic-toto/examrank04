#include "Fwoosh.hpp"

 Fwoosh::Fwoosh()
{
	this->name = "Fwoosh";
	this->effects = "fwooshed";
}

Fwoosh::~Fwoosh() {}

virtual Fwoosh *Fwoosh::clone(Fwoosh &copy) const
{
	return (new Fwoosh());
}
