// My solution for C++ Primer Fifth Edition, Exercise 5.4.1 from page 185
//

#include <iostream>
#include <vector>


int main()
{
	std::vector<int> v = { 0, 1, 1, 2 };
	std::vector<int> c = { 0, 1, 1, 2, 3, 5, 8 };
	bool pref = false;

	if (v < c) {
		auto itv = v.cbegin();
		auto itc = c.cbegin();
		
		while (itv != v.end()) { //only execute until end of 'v', because 'c' cant be smaller than 'v'
			if (*itv != *itc){
				break;
			}

			++itv;
			++itc;
		}

		if (itv == v.end()) {
			pref = true;
		}
	}

	if (!pref) {
		std::cout << "False\n";
	}
	else {
		std::cout << "True\n";
	}

	return 0;
}
