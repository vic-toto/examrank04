#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <stdlib>
#include <string>

class	Warlock{

	private:
		std::string name;
		std::string title;

	Warlock()
	Warlock(Warlock const &other);
	Warlock &operator=(Warlock const &other)

	pubilc:
	~Warlock();
	Warlock(std::string name, std::title);
	void	setName(std::string name) {this->name = name;}
	void	setTitle(std::string title) {this->title = title;}
const 	std::string	&getName() const;
const	std::string	&setTitle() const;
	void	introduce();
}


#endif
