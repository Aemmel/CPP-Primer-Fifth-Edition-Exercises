// My solution for C++ Primer Fifth Edition, Exercise 5.4.4 from page 190
//

#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::string d = "";

	while (std::cin >> s) {
		if (d == s || s == "end") { //terminate loop with "end"
			break;
		}
		d = s;
	}

	if (d == s) {
		std::cout << "The word '" << s << "' occured twice!\n";
	}
	else {
		std::cout << "No word occured twice\n";
	}

	return 0;
}
