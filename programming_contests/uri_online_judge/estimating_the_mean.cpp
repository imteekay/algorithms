#include <iostream>
#include <vector>

using namespace std;

int maximum_subsequence_sum(vector<int> &v) {
	int max_seq = 0, result = 0, greater = v[0];
	
	for (int i = 1; i < v.size(); i++) if (v[i] > greater) greater = v[i];
	
	for (int i = 0; i < v.size(); i++) {
	    if (v[i] == greater) max_seq++;
	    else max_seq = 0;
	    if (max_seq > result) result = max_seq;
	}
	
	return result;
}

int main() {
	int n, num, x, result, casy = 1;
	cin >> n;
	
	while (n--) {
		cin >> num;
		vector<int> v;
		
		while (num--) {
			cin >> x;
			v.push_back(x);
		}

		result = maximum_subsequence_sum(v);
		cout << "Caso #" << casy << ": " << result << endl;
		casy++;
	}

	return 0;
}
