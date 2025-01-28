#include <iostream>
#include <algorithm>
using namespace std;

class Report {
	public:
		string name;
		int hour;
		int minute;

		static bool compare(Report* a, Report* b) {
			if (a->hour != b->hour) {
				return a->hour > b->hour;
			}

			return a->minute < b->minute;
		}
};

Report* reports[1000];

int main() {
	int p, q;
	cin >> p >> q;

	for (int i = 0; i < q; i++) {
		reports[i] = new Report();
		scanf("%d:%d", &reports[i]->hour, &reports[i]->minute);
		cin >> reports[i]->name;
	}

	stable_sort(reports, reports + q, Report::compare);

	for (int i = 0; i < q; i++) {
		if (reports[i]->hour == 0 && reports[i]->minute <= p) {
			cout << reports[i]->name << endl;
		} else if (reports[i]->hour == 23 && reports[i]->minute >= (60 - p)) {
			cout << reports[i]->name << endl;
		}
	}

	return 0;
}
