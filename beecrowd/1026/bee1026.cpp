#include <iostream>
using namespace std;

int main() {
	long long int a, b;

	while (cin >> a >> b) {
		cout << (long long int)(a ^ b) << endl;
	}

	return 0;
}