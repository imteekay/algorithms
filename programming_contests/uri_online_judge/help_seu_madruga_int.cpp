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

int main() {
	vector<int> v;
	int n, x, value, temp, counter;
	
	cin >> n >> value;

	while (n + value != 0) {

		for (int i = 0; i < n; i++) {
			cin >> temp;
			v.push_back(temp);
		}

		x = get_bigger(v);
		x--;
		float result;

		for (int i = x; i >= 0; i--) {
			counter = 0;
			for (int j = 0; j < v.size(); j++) {				
				if (v[j] >= i) {
					counter += (v[j] - i);
				}
			}

			if (counter == value) {
				result = i;
				break;
			} else if (counter > value) {
				result = -1;
				break;
			}
		}

		if (result == -1) cout << "-.-" << endl;
		else if (result == 0) cout << ":D" << endl;
		else cout << fixed << setprecision(4) << result << endl;
		
		cin >> n >> value;
		v.clear();
	}

	return 0;
}