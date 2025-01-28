#include <iostream>
#include <algorithm>
using namespace std;

class Nation {
	public:
		string name;
		int gold;
		int silver;
		int bronze;

		static bool compare(Nation* a, Nation* b) {
			if (a->gold != b->gold) {
				return a->gold > b->gold;
			}

			if (a->silver != b->silver) {
				return a->silver > b->silver;
			}

			if (a->bronze != b->bronze) {
				return a->bronze > b->bronze;
			}

			return (a->name.compare(b->name) < 0);
		}
};

Nation* nations[500];

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		nations[i] = new Nation();
		cin >> nations[i]->name;
		cin >> nations[i]->gold;
		cin >> nations[i]->silver;
		cin >> nations[i]->bronze;
	}

	sort(nations, nations + n, Nation::compare);

	for (int i = 0; i < n; i++) {
		cout << nations[i]->name << " " << nations[i]->gold << " " << nations[i]->silver << " " << nations[i]->bronze << endl;
	}

	return 0;
}