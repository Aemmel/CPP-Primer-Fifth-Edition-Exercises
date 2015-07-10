// My solution for C++ Primer Fifth Edition, Exercise 6.2.3 from page 215
//

/*
 * for the first part/function
*/
#include <iostream>
#include <string>
#include <ctype.h>

bool hasCapital(const std::string& str)
{
	for (auto it : str) {
		if (isupper(it)) {
			return true;
		}
	}

	return false;
}

int main()
{
	std::string s;

	std::cin >> s;
	std::cout << hasCapital(s) << std::endl;

	return 0;
}

/*
 * for the second part/function
*/

void changeToLower(std::string& str)
{
	for (auto& it : str) {
		it = tolower(it);
	}
}

int main()
{
	std::string s;

	std::cin >> s;
	changeToLower(s);
	std::cout << s << std::endl;

	return 0;
}
