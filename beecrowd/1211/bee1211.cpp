#include <iostream>
#include <algorithm>
using namespace std;

string phones[100000];

int main() {
	long int n, saved;

	while (cin >> n) {
		saved = 0;

		for (int i = 0; i < n; i++) {
			cin >> phones[i];
		}

		sort(phones, phones + n);

		for (int i = 1; i < n; i++) {
			for (int j = 0; j < phones[i - 1].length(); j++) {
				if (phones[i - 1].at(j) == phones[i].at(j)) {
					saved++;
				} else {
					break;
				}
			}
		}

		cout << saved << endl;
	}

	return 0;
}