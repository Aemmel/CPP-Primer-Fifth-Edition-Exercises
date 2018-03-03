// comparing tow arrays for equality (same behaviour as with vectors
//

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstddef>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	constexpr int sz = 10;
	int a1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a2[10] = { };
	for (std::size_t i = 0; i < 10; ++i) {
		a2[i] = i + 1;
	}

	int *const e1 = std::end(a1);
	int *const b1 = std::begin(a1);
	int *const e2 = std::end(a2);
	int *const b2 = std::begin(a2);

	auto diff_1 = e1 - b1;
	auto diff_2 = e2 - b2;

	int *i1 = std::begin(a1);
	int *i2 = std::begin(a2);

	while (i1 != e1 && i2 != e2 && *i1 == *i2) {
		++i1;
		++i2;
	}

	//equal entrys
	if (i1 == e1 || i2 == e2) {
		//equal size
		if (diff_1 == diff_2) {
			cout << "A1 = A2" << endl;
		}
		//different size
		else {
			if (diff_1 > diff_2) {
				cout << "A1 > A2..." << endl;
			}
			else {
				cout << "A1 < A2..." << endl;
			}
		}
	}
	//unequal entrys
	else {
		if (*i1 > *i2) {
			cout << "A1 > A2" << endl;
		}
		else {
			cout << "A1 < A2" << endl;
		}
	}


	return 0;
}
