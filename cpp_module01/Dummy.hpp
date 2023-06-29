#ifndef DUMMY_HPP
#define DUMMY_HPP
#include "ATarget.hpp"
class ATarget;

class	Dummy : public ATarget
{
	public:	
		Dummy();
		~Dummy();
		virtual *clone(Dummy &copy) const;
};
	

#endif
