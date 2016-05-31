// https://www.urionlinejudge.com.br/judge/en/problems/view/1875

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	int n, m;
	string p1, p2;
	cin >> n;

	while (n--) {
		int b = 0, g = 0, r = 0;
		cin >> m;
		while (m--) {
			cin >> p1 >> p2;

			if (p1 == "G") {
				if (p2 == "B") g += 2;
				else g++;
			} else if (p1 == "R") {
				if (p2 == "G") r += 2;
				else r++;
			} else {
				if (p2 == "R") b += 2;
				else b++;
			}
		}
 
		if (b == g && b == r) cout << "trempate" << endl;
		else if (b > g && b == r) cout << "empate" << endl;
		else if (g > b && g == r) cout << "empate" << endl;
		else if (g > r && g == b) cout << "empate" << endl;
		else if (g > r && g > b) cout << "green" << endl;
		else if (b > r && b > g) cout << "blue" << endl;
		else if (r > g && r > b) cout << "red" << endl;

	}

	return 0;
}