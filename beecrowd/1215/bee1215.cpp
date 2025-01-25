#include <iostream>
#include <set>
using namespace std;

set<string> words;

void addToSet(string str) {
	string temp = "";

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			temp.push_back(tolower(str[i]));
		} else if (str[i] >= 'a' && str[i] <= 'z') {
			temp.push_back(str[i]);
		} else if (temp.length() > 0) {
			words.insert(temp);
			temp = "";
		}
	}

	if (temp.length() > 0) {
		words.insert(temp);
	}
}

int main() {
	string word;

	while (cin >> word) {
		addToSet(word);
	}

	for (auto word : words) {
		cout << word << endl;
	}

	return 0;
}