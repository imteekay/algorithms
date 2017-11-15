#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int n, m, temp1, temp2;
	char result;
	vector<int> atacantes;
	vector<int> defensores;
	
	cin >> n;
	cin >> m;
	
	while (n + m != 0) {
		
		for(int i = 0; i < n; i++) {
			cin >> temp1;
			atacantes.push_back(temp1);
		}
		
		for(int j = 0; j < m; j++) {
			cin >> temp2;
			defensores.push_back(temp2);
		}
		
		sort(atacantes.begin(), atacantes.end());
		sort(defensores.begin(), defensores.end());
		
		
		if (atacantes[0] < defensores[1])
			cout << "Y" << endl;
		else
			cout << "N" << endl;
		
		cin >> n;
		cin >> m;
		atacantes.clear();
		defensores.clear();
	}

	return 0;
}
