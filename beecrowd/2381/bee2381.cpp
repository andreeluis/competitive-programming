#include <iostream>
#include <algorithm>
using namespace std;

string students[100];

int main() {
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> students[i];
	}

	sort(students, students + n);

	cout << students[k - 1] << endl;

	return 0;
}