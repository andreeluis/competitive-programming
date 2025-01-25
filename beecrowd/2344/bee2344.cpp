#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	switch (n) {
		case 0:
			cout << "E" << endl;
			break;
		case 1 ... 35:
			cout << "D" << endl;
			break;
		case 36 ... 60:
			cout << "C" << endl;
			break;
		case 61 ... 85:
			cout << "B" << endl;
			break;
		case 86 ... 100:
			cout << "A" << endl;
			break;
	}

	return 0;
}