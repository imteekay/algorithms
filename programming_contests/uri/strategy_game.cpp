// https://www.urionlinejudge.com.br/judge/en/problems/view/1940

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<int> v;
	int players, rounds, temp;
	cin >> players >> rounds;
	
	for (int i = 0; i < players; i++) v.push_back(0);
	
	for (int i = 0; i < rounds; i++) {
		for (int j = 0; j < players; j++) {
			cin >> temp;
			v[j] += temp;
		}
	}
	
	int winner = 1, greater = v[0];
	
	for (int i = 1; i < players; i++) {
		if (v[i] >= greater) {
			greater = v[i];
			winner = i+1;
		}
	}
	
	cout << winner << endl;
	
	return 0;
}
