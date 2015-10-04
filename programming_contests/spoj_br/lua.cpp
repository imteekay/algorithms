#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {

	int n1, n2, test=1;
	cin >> n1 >> n2;	

	while (n1 + n2 != 0) {

		vector<int> v;

		for (int i = 0; i < n1; i++) {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}

		int total = 0;

		for (int i = 0; i < n2; i++)
			total += v[i];

		int max = (total / n2);
		int min = (total / n2);

		for (int i = n2; i < n1; i++) {
			total -= v[i-n2];
			total += v[i];

			int media = total / n2;

			if (media > max) max = media;
			if (media < min) min = media;
		}

		cout << "Teste " << test << endl;
		cout << min << " " << max << endl << endl;

		test++;
		cin >> n1 >> n2;
	}

	return 0;
}