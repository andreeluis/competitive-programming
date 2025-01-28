#include <iostream>
using namespace std;

pair<int, int> cars[1000];
int k, inUse;

bool addCar(int arrival, int exit) {
	while (inUse > 0 && cars[inUse - 1].second <= arrival) {
		inUse--;
	}

	if (inUse < k && (cars[inUse - 1].second > exit || inUse == 0)) {
		cars[inUse].first = arrival;
		cars[inUse].second = exit;

		inUse++;

		return true;
	}

	return false;
}

int main() {
	int n, tempA, tempE;
	bool isPossible;

	cin >> n >> k;
	while (n != 0 && k != 0) {
		inUse = 0;
		isPossible = true;

		for (int i = 0; i < n; i++) {
			cin >> tempA >> tempE;

			if (!addCar(tempA, tempE)) {
				isPossible = false;
			}
		}

		if (isPossible) {
			cout << "Sim" << endl;
		} else {
			cout << "Nao" << endl;
		}

		cin >> n >> k;
	}

	return 0;
}