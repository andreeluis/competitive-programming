#include <iostream>
#include <algorithm>
using namespace std;

int books[1000];

int main() {
	int n;

	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> books[i];
		}

		sort(books, books + n);

		for (int i = 0; i < n; i++) {
			printf("%04d\n", books[i]);
		}
	}

	return 0;
}