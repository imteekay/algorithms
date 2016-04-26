// https://www.urionlinejudge.com.br/judge/en/problems/view/1441

#include <iostream>

using namespace std;

int resolve(int h, int max) {
	if (h == 1) return max;
	cout << "h: " << h << " max: " << max << endl;
	if (h % 2 == 0) h = h / 2;
	else h = 3 * h + 1;

	if (h > max) max = h;
	return resolve(h, max);
}

int main() {
	
	int n;

	while (cin >> n && n) {
		cout << resolve(n, n) << endl;
	}
	
	return 0;
}