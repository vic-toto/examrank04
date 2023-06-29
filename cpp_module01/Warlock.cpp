#include "Warlock.hpp"

void	learnSpell(ASpell *spell)
{
	if (spell)
		arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone(spell);
}

void	forgetSpell(std::string spell)
{
	std::map<std::string, ASpell *>::iterator it = arr.find[spell];
	if it != arr.end()
		delete it->second;
	arr.erase(spell_name);
}

void	launchSpell(std::string spellName, ATarget const &target)
{
	ASpell *spell = arr[spellName];
	spell->launch(target);
}

Warlock::Warlock(std::string const &name, std::string const &title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day.\n";
}

void	Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

Warlock::~Warlock() {std::cout << this->name <<": My job here is done!\n";}
std::string const &Warlock::getName() const {return this->name;}
std::string const &Warlock::getTitle() const {return this->title;}
void    Warlock::setTitle(std::string const &title) {this->title = title;}
