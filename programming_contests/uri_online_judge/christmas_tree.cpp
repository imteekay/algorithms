	// https://www.urionlinejudge.com.br/judge/en/problems/view/1768

	#include <iostream>
	#include <string>

	using namespace std;

	int main() {
		
		int n, mid, start, end;

		while (cin >> n) {
			mid = n / 2;
			start = mid;
			end = mid;

			for (int i = 0; i < mid + 1; i++) {
				for (int j = 0; j < n; j++) {
					if (j >= start && j <= end) cout << "*";
					else if (j > end) break;
					else cout << " ";
				}

				cout << endl;
				start--;
				end++;
			}

			for (int i = 0; i < n; i++) {
				if (i == mid) cout << "*";
				else if (i > mid) break;
				else cout << " ";
			}

			cout << endl;

			for (int i = 0; i < n; i++) {
				if (i == mid || i == mid-1 || i == mid+1) cout << "*";
				else if (i > mid+1) break;
				else cout << " ";
			}

			cout << endl << endl;
		}

		return 0;
	}