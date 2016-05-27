// https://www.urionlinejudge.com.br/judge/en/problems/view/1089

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int n, picos=0, temp;
	vector<int>	loop;

	cin >> n;

	while (n != 0) {

		for (int i = 0; i < n; i++) {
			cin >> temp;
			loop.push_back(temp);
		}

		loop.push_back(loop[0]);
		loop.push_back(loop[1]);

		for (int i = 1; i <= n; i++) {
			if ((loop[i] > loop[i-1] && loop[i] > loop[i+1]) || (loop[i] < loop[i-1] && loop[i] < loop[i+1])) picos++;
		}

		cout << picos << endl;

		picos = 0;
		loop.clear();
		cin >> n;
	}

	return 0;
}