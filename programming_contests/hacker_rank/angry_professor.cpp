#include <iostream>

using namespace std;

int main() {

	int t, n, k, time, total_students_arrived_before_class=0;

	cin >> t;

	while (t--) {
		cin >> n >> k;

		for (int i = 0; i < n; i++) {
			cin >> time;
			if (time <= 0) total_students_arrived_before_class++;
		}

		if (total_students_arrived_before_class >= k) cout << "NO" << endl;
		else cout << "YES" << endl;
		total_students_arrived_before_class=0;
	}

	return 0;
}
