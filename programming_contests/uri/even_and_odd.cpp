// https://www.urionlinejudge.com.br/judge/en/problems/view/1259

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> odds, evens;
	int n;
	cin >> n;
	
	while (cin >> n) {
		if (n % 2 == 0) evens.push_back(n);
		else odds.push_back(n);
	}
	
	sort(evens.begin(), evens.end());
	sort(odds.begin(), odds.end(), greater<int>());
	
	for (int i = 0; i < evens.size(); i++) cout << evens[i] << endl;
	for (int i = 0; i < odds.size(); i++) cout << odds[i] << endl;
	
	return 0;
}
