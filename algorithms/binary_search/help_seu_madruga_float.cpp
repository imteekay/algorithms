// https://www.urionlinejudge.com.br/judge/en/problems/view/1912

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

float get_bigger(vector<float> &v) {
	float max = v[0];
	for (float i = 1; i < v.size(); i++) if (v[i] > max) max = v[i];
	return max;
}

float area_binary_search(vector<float> &v, float area) {
	float NOT_FOUND = -1;
	float low = 0, high = get_bigger(v), mid, sum;

	while (low < high) {
		mid = (low + high) / 2;
		sum = 0;

		for (float i = 0; i < v.size(); i++) if (v[i] - mid > 0) sum += v[i] - mid;
		if (sum == area) return mid;
		else if (sum > area) low = mid;
		else high = mid;
	}

	return NOT_FOUND;	
}

int main() {
	vector<float> v;
	float n, x, value, temp, counter, result;
	
	cin >> n >> value;

	while (n + value != 0) {

		for (float i = 0; i < n; i++) {
			cin >> temp;
			v.push_back(temp);
		}

		float sum = 0;

		for (float i = 0; i < v.size(); i++) sum += v[i];

		if (sum == value) {
			cout << ":D" << endl;
		} else {
			result = area_binary_search(v, value);

			if (result == -1) cout << "-.-" << endl;
			else cout << fixed << setprecision(4) << result << endl;
		}
			
		cin >> n >> value;
		v.clear();
	}

	return 0;
}