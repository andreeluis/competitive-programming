#include <iostream>
#include <algorithm>
using namespace std;

class Student {
	public:
		string name;
		int distance;
		char region;

		static bool compare(Student* a, Student* b) {
			if (a->distance != b->distance) {
				return a->distance < b->distance;
			}

			if (a->region != b->region) {
				return a->region < b->region;
			}

			return a->name.compare(b->name) < 0;
		}
};


int main() {
	int q;

	while (cin >> q) {
		Student* students[q];

		for (int i = 0; i < q; i++) {
			students[i] = new Student();
			cin >> students[i]->name;
			cin >> students[i]->region;
			cin >> students[i]->distance;
		}

		sort(students, students + q, Student::compare);

		for (int i = 0; i < q ; i++) {
			cout << students[i]->name << endl;
		}
	}

	return 0;
}