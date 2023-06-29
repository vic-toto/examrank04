#include "Dummy.hpp"

Dummy::Dummy()
{
        this->type ="Target Practice Dummy";
}

Dummy::~Dummy() {}

virtual Dummy *Dummy::clone(Dummy &copy) const
{
        return (new Dummy());
}
