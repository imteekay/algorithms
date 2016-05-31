// https://www.urionlinejudge.com.br/judge/en/problems/view/1912

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int get_bigger(vector<int> &v) {
	int max = v[0];
	for (int i = 1; i < v.size(); i++) if (v[i] > max) max = v[i];
	return max;
}

int area_binary_search(vector<int> &v, int area) {
	int NOT_FOUND = -1;
	int low = 0, high = get_bigger(v), mid, sum;

	while (low <= high) {
		mid = (low + high) / 2;
		sum = 0;

		for (int i = 0; i < v.size(); i++) if (v[i] - mid > 0) sum += v[i] - mid;

		if (sum == area) return mid;
		else if (sum > area) low = mid + 1;
		else high = mid - 1;
	}

	return NOT_FOUND;	
}

int main() {
	vector<int> v;
	int n, x, value, temp, counter;
	
	cin >> n >> value;

	while (n + value != 0) {

		for (int i = 0; i < n; i++) {
			cin >> temp;
			v.push_back(temp);
		}

		float result;

		result = area_binary_search(v, value);

		if (result == -1) cout << "-.-" << endl;
		else if (result == 0) cout << ":D" << endl;
		else cout << fixed << setprecision(4) << result << endl;
		
		cin >> n >> value;
		v.clear();
	}

	return 0;
}