//print values of 2D array using multiple methods. Not auto or decltype allowed!

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
	int ia[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	//range for
	for (const int (&row)[4] : ia) {
		for (const int &col : row) {
			cout << col << endl;
		}
	}

	//regular for with subscripts
	for (std::size_t y = 0; y < 3; ++y) {
		for (std::size_t x = 0; x < 4; ++x) {
			cout << ia[y][x] << endl;
		}
	}

	//regular for with pointers
	for (const int(*y)[4] = std::begin(ia); y != std::end(ia); ++y) {
		for (const int *x = std::begin(*y); x != std::end(*y); ++x) {
			cout << *x << endl;
		}
	}

	return 0;
}
