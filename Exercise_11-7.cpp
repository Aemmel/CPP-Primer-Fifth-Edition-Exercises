#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

int main()
{
	std::map<std::string, std::vector<std::string>> fam;

	std::string word;
	std::string line;

	std::getline(std::cin, word);

	auto it = std::find(word.begin(), word.end(), ' ');
	line = std::string(word.begin(), it);
	word.erase(word.begin(), it);

	std::string temp;
	for (auto i = word.begin(); i != word.end(); ++i) {
		if (*i == ' ' || i == word.end() - 1) {
			fam[line].push_back(temp);
			temp = "";
			continue;
		}
		temp.push_back(*i);
	}

	for (auto i : fam) {
		std::cout << "Family Name: " << i.first << " Childrens names: ";
		for (auto d : i.second) {
			std::cout << d << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}

