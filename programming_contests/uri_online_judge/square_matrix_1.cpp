// https://www.urionlinejudge.com.br/judge/en/problems/view/1435

#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	while (n != 0) {

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
					if (j + 1 == n) cout << 1;
					else cout << 1 << " ";
				} else {
					if (j + 1 == n) cout << 2;
					else cout << 2 << " ";
				}
			}

			cout << endl;
		}

		cout << endl;

		cin >> n;
	}

	return 0;
}

// ----------------------------------------------------------------------------------------

// https://www.urionlinejudge.com.br/judge/en/problems/view/1435

#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n;
  cin >> n;

  while (n != 0) {

    vector<int> v;
    vector< vector<int> > table;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) v.push_back(0);
      table.push_back(v);
    }



    cin >> n;
  }

  return 0;
}


