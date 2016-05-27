// https://www.urionlinejudge.com.br/judge/en/problems/view/1030

#include <iostream>
#include <vector>

using namespace std;

int verify_last_value(vector<int> &v) {
	int counter = 0;
	for (int i = 0; i < v.size(); i++) if (v[i] == 1) counter++;
	return counter;
}

int can_be_counted(vector<int> &v, int index, int n) {
	while (v[index] == 0) {
		if (index == n - 1) index = 0;
		else index++;
		cout << index << " ";
	}
	cout << endl;
	return index;
}

int get_last_value_index(vector<int> &v) {
	for (int i = 0; i < v.size(); i++) if (v[i] == 1) return i;
}

int main() {
	
	int nc, n, k, c = 1;

	cin >> nc;

	while (nc--) {
		cin >> n >> k;

		vector<int> v;
		int i = 0, counter = 1;

		for (int i = 0; i < n; i++) v.push_back(1);

		while (verify_last_value(v)) {
			i = can_be_counted(v, i, n);

			if (counter == k) {
				v[i] = 0;
				counter = 0;
			} else {
				counter++;
			}

			i++;
			if (i == n - 1) i = 0;
		}

		cout << "Case " << c << ": " << get_last_value_index(v) << endl;
		c++;
	}

	return 0;
}