#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool is_power_of_two(int n) {
	for (int i = 2; i <= n; i *= 2)
		if (i == n) return true;
	
	return false;
}

string get_winner(vector<int> &points) {
	int bigger = -1, index = -1;
	for (int i = 0; i < points.size(); i++) {
		if (points[i] > bigger) {
			index = i;
			bigger = points[i];
		}
	}
	
	for (int i = 0; i < points.size(); i++) cout << points[i] << " ";
	cout << endl;
	
	sort(points.begin(), points.end());
	int last = points.back(), penultimate = points.end()[-2];
	
	if (last == penultimate) return "URI";
	else if (index == 0) return "Uilton";
	else if (index == 1) return "Rita";
	else return "Ingred";
}

int main() {
	int n, x;
	cin >> n;
	
	while (n != 0) {
		vector<int> points(3, 0);
		while (n--) {
			int greater = 0, index = -1;
			for (int i = 0; i < 3; i++) {
				cin >> x;
				if (is_power_of_two(x)) {
					points[i]++;
					if (x > greater) {
						greater = x;
						index = i;
					}
				}
			}
			
			if (index != -1) points[index]++;
		}
		
		string winner = get_winner(points);
		cout << winner << endl;
		cin >> n;
	}
	
	return 0;
}
