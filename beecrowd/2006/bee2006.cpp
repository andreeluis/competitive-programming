#include <iostream>
using namespace std;

int main() {
	int t, correct = 0, temp;
	cin >> t;

	for (int i = 0; i < 5; i++) {
		cin >> temp;
		if (temp == t) {
			correct++;
		}
	}

	cout << correct << endl;

	return 0;
}