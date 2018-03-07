//read in strings, tell what word had most immediate occurences

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
	vector<string> v;
	string word;
	while (cin >> word) {
		v.push_back(word);
	}
	
	if (v.empty()) {
		std::cerr << "Enter words!! You fool!" << endl;
		return -1;
	}

	string max_word;
	string prev_word = v[0];
	unsigned max_cnt = 0;
	unsigned curr_cnt = 0;
	for (const auto &s : v) {
		if (prev_word == s) {
			++curr_cnt;
		}
		else {
			if (curr_cnt > max_cnt) {
				cout << curr_cnt << " " << max_cnt << endl;
				max_cnt = curr_cnt;
				max_word = prev_word;
			}
			curr_cnt = 1; //already on apperance, therfore 1 not 0
		}

		prev_word = s;
	}

	cout << "\n\n" << "Word: '" << max_word << "' occured " << max_cnt << " times" << endl;

	return 0;
}
