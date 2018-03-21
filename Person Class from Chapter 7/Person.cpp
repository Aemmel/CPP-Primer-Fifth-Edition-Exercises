#include "Person.hpp"

P::Person::Person(std::istream &is)
{
	read(is, *this);
}

std::ostream &P::print(std::ostream &os, const Person &dude)
{
	os << dude.name << " is living at: " << dude.address;

	return os;
}

std::istream &P::read(std::istream &is, Person &dude)
{
	std::getline(is, dude.name);
	std::getline(is, dude.address);

	return is;
}