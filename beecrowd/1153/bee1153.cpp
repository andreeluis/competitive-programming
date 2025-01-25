#include <iostream>
using namespace std;

int main() {
	int n, fact = 1;
	cin >> n;

	while (n >= 2) {
		fact *= n--;
	}

	cout << fact << endl;

	return 0;
}