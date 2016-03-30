// https://www.urionlinejudge.com.br/judge/en/problems/view/1030

#include <iostream>
#include <vector>

using namespace std;

int parse_index(int index, int size) {
	if (index >= size) return index - size;
	return index;		
}

int main() {
	
	long long int n, num1, num2;
	cin >> n;

	while (n--) {
		cin >> num1 >> num2;
		num2--;

		vector<int> v;
		for (int i = 1; i <= num1; i++) v.push_back(i);
		int index = 0;

		while (v.size() > 1) {
			index += num2;
			index = parse_index(index, v.size());
			v.erase(v.begin() + index);
		}

		cout << v[0] << endl;
		
	}

	return 0;
}