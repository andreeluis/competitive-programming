#include <iostream>
using namespace std;

int main() {
	int v, i = 1;
	cin >> v;

	while (v > 0) {
		cout << "Teste " << i++ << endl;

		// 50
		cout << v / 50 << " ";
		v = v % 50;

		// 10
		cout << v / 10 << " ";
		v = v % 10;

		// 5
		cout << v / 5 << " ";
		v = v % 5;

		// 1
		cout << v << endl << endl;

		cin >> v;
	}
}