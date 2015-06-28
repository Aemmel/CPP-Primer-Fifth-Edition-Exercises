// My solution for C++ Primer Fifth Edition, Exercise 5.4.1 from page 185
//

#include <iostream>
#include <string>
#include <vector>

template <typename T>
void printVec(std::vector<T> vec)
{
	for (auto it = vec.cbegin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<std::string> v;
	std::string s;

	while (std::cin >> s && s != "end") {
		v.push_back(s);
	}

	int max = 0;
	int tempMax = 0;
	std::string word; //word with highest amount of repeats
	auto it = v.cbegin() + 1;

	if (!v.empty()) {
		while (it != v.end()) {
			if (*(it - 1) == *it) {
				++tempMax;
				if (tempMax > max) {
					word = *it;
					max = tempMax;
				}
			}
			else {
				tempMax = 0;
			}

			++it;
		}
	}


	if (max == 0) {
		std::cout << "No word repeats itself immediatly!\n";
	}
	else {
		std::cout << "The word '" << word << "' had the most amount of repeats with " << max + 1 << " occurs!\n";
	}

	return 0;
}
