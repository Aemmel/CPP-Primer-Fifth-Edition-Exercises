#include <iostream>
#include <string>

using namespace std; //only using it because its an exercise, I'm never using this in my real programs..

void func(string& s, const string &oldVal, const string &newVal)
{
	decltype(s.begin()) it = s.begin();
	size_t cnt = 0;
	size_t pos1 = 0;

	while (it != s.end()) {
		if (*it == oldVal.at(0) && !pos1) {
			pos1 = cnt; //save position of first matching character
		}
		if (pos1) { //if characters of s still match oldVal
			if (*it != oldVal.at(cnt - pos1)) { //if it so happens they dont anymore, then reset pos1
				pos1 = 0;
			}
			else if (*it == oldVal.at(oldVal.size() - 1) && cnt - pos1 == oldVal.size() - 1) { //if there is a perfect match (matches until last char of oldVal)
				s.erase(pos1, cnt - pos1 + 1); //erase this substring
				s.insert(pos1, newVal); //insert newVal

				it = s.begin() + (pos1 + newVal.size()); //set iterator to last char of new pos
				cnt = pos1 + newVal.size();

				pos1 = 0; //reset dat bitch
			}
		}

		++cnt;
		++it;
	}
}

int main()
{
	string s = "I hate when people say thru and use words like tho. Seriously, why do people say thru and tho.";

	cout << s << endl;

	func(s, "thru", "through");
	func(s, "tho", "though");

	cout << s << endl;

	return 0;
}
