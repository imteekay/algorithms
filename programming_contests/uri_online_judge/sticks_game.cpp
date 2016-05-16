// https://www.urionlinejudge.com.br/judge/en/problems/view/1366

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int n, size, quant, total, result;

	while (cin >> n && n != 0) {
		total = 0;
		for (int i = 0; i < n; i++) {
			cin >> size >> quant;
			if (quant % 2 != 0) quant--;
			total += quant;
		}

		result = total / 4;
		cout << result << endl;
	}

	return 0;
}