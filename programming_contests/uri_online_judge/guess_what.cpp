// https://www.urionlinejudge.com.br/judge/en/problems/view/1547

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	while (n--) {
		vector<int> v;
		int n1, n2, temp, result = -1;
		cin >> n1 >> n2;
		
		for (int i = 0; i < n1; i++) {
			cin >> temp;
			v.push_back(temp);
			if (temp == n2 && result != -1) result = i+1;
		}
		
		if (result != -1) {
			cout << result << endl;
		} else {
			
			int min = 101;
			for (int i = 0; i < v.size(); i++) {
				if (abs(n2 - v[i]) < min) {
					min = abs(n2 - v[i]);
					result = i+1;
				}
			}

			cout << result << endl;
		}
	}
	
	return 0;
}
