#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, good = 0, bad = 0;
	char behavior;
	string children[100];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> behavior;
		cin >> children[i];

		if (behavior == '+') {
			good++;
		} else {
			bad++;
		}
	}

	sort(children, children + n);

	for (int i = 0; i < n; i++) {
		cout << children[i] << endl;
	}

	cout << "Se comportaram: " << good << " | Nao se comportaram: " << bad << endl;

	return 0;
}