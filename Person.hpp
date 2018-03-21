#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <vector>
#include <iostream>

namespace P
{
	class Person
	{
		// friend declarations
		friend std::ostream &print(std::ostream &, const Person &);
		friend std::istream &read(std::istream &, Person &);

		public:

		// constructors
		Person() = default;
		Person(const std::string &n, const std::string &a) : name(n), address(a) { };
		Person(std::istream &);

		// functions
		std::string get_name() const { return name; }
		std::string get_address() const { return address; }

		private:

		// variables
		std::string name;
		std::string address;
	};

	std::ostream &print(std::ostream &, const Person &);
	std::istream &read(std::istream &, Person &);

}

#endif // PERSON_HPP
