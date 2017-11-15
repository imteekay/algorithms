// https://www.urionlinejudge.com.br/judge/en/problems/view/1228

#include <iostream>

#define swap(a, b) { int x=a; a=b; b=x; }

using namespace std;

int main() {
	int n, num, passing;
	int start[25], finish[25], mapper[25];

	while (cin >> n) {
		passing = 0;

		for (int i = 1; i <= n; i++) {
			cin >> num;
			start[i] = num;
		}
		
		for (int i = 1; i <= n; i++) {
			cin >> num;
			finish[i] = num;
		}

		for (int i = 1; i <= n; i++) mapper[finish[i]] = i;

		for (int i = 1; i <= n; i++) {
			for (int j = i+1; j <= n; j++) {
				if (mapper[start[i]] > mapper[start[j]]) {
					swap(mapper[start[i]], mapper[start[j]]);
					passing++;
				}
			}
		}

		cout << passing << endl;
	}

	return 0;
}