//check if one vector is prefix of other one

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstddef>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


int main()
{
	vector<int> v1{ 4, 3, 4 };
	vector<int> v2{ 2, 3, 4, 5, 6, 7 };

	if (v1.size() == v2.size()) {
		cout << "Nope" << endl;
		return 0;
	}

	vector<int> small = (v1.size() > v2.size()) ? v2 : v1;
	vector<int> big = (v1.size() < v2.size()) ? v2 : v1;

	auto beg = small.begin();

	for (; beg != small.end() && *beg == *(big.begin() + (beg - small.begin())); ++beg) {
		; //null statement
	}

	if (beg == small.end()) {
		cout << "yep" << endl;
	}
	else {
		cout << "nope" << endl;
	}

	return 0;
}
