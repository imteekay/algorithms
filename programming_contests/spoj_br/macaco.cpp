#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n, test=1;
	cin >> n;

	while (n) {

		vector< vector<int> > retangulos;		
		int temp;

		for (int i = 0; i < n; i++) {
			
			vector<int> points;
			int time = 4;
			
			while (time--) {
				cin >> temp;
				points.push_back(temp);
			}

			retangulos.push_back(points);
		}

		int point1x=-10001, point1y=10001, point2x=10001, point2y=-10001;

		for (int i = 0; i < n; i++) {
			if (retangulos[i][0] > point1x && retangulos[i][1] < point1y) {
				point1x = retangulos[i][0];
				point1y = retangulos[i][1];				
			}

			if (retangulos[i][1] < point2x && retangulos[i][3] > point2y) {				
				point2x = retangulos[i][2];
				point2y = retangulos[i][3];
			}
		}

		cout << "Teste " << test << endl;

		int correct=0;

		for (int i = 0; i < n; i++) {
			if (point1x >= retangulos[i][0] && point1y <= retangulos[i][1] && point2x <= retangulos[i][2] && point2y >= retangulos[i][3]) correct++;
		}

		if (correct != n) cout << "nenhum" << endl << endl;
		else cout << point1x << " " << point1y << " " << point2x << " " << point2y << endl << endl;

		cin >> n;
		test++;
	}

	return 0;
}