#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;
	vector<int> v;
	cin >> n;
	
	while (n--) {
		int temp;
		
		for (int i = 0; i < 4; i++) {
			cin >> temp;
			v.push_back(temp);
		}
			
		sort(v);
		
		if (v[0] == v[1] && v[0] == v[2] && v[0] == v[3]) cout << "quadrado" << endl;
		else if (v[0] == v[1] && v[2] == v[3]) cout << "retangulo" << endl;
		else if (v[0] + v[1] + v[2] > v[3]) cout << "quadrilatero" << endl;
		else cout << "invalido" << endl;
	}

	return 0;
}