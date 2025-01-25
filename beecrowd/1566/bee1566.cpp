#include <iostream>
#include <algorithm>
using namespace std;

int heights[3000000];

int main() {
	int nc, n;
	cin >> nc;

	for (int i = 0; i < nc; i++) {
		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> heights[j];
		}

		sort(heights, heights + n);

		for (int j = 0; j < n - 1; j++) {
			cout << heights[j] << " ";
		}

		cout << heights[n - 1] << endl;
	}

	return 0;
}