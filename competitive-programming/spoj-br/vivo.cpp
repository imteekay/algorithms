#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n1, n2, test=1;
	scanf("%d %d", &n1, &n2);

	while (n1 + n2 != 0) {

		int temp;
		vector<int> v;

		for (int i = 0; i < n1; i++) {
			scanf("%d", &temp);
			v.push_back(temp);
		}

		while (n2--) {
			int n, j, erasing=0;
			scanf("%d %d", &n, &j);

			for (int i = 0; i < n; i++) {
				int t;
				scanf("%d", &t);
				
				if (t != j) {
					v.erase(v.begin() + i - erasing);
					erasing++;
				}
			}
		}

		cout << "Teste " << test << endl;
		cout << v[0] << endl << endl;		

		test++;
		scanf("%d %d", &n1, &n2);
	}

	return 0;
}