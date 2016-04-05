// https://www.urionlinejudge.com.br/judge/en/problems/view/1250

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_hit(vector<int> &v, string js, int ind) {
	if (js[ind] == 'S' && (v[ind] == 1 || v[ind] == 2)) return true;
	if (js[ind] == 'J' && v[ind] > 2) return true;
	return false;
}

int main() {
	
	int n, x, temp;
	string js;
	vector<int> v;
	
	cin >> n;
	
	while (n--) {
		int counter = 0;
		cin >> x;
		
		for (int i = 0; i < x; i++) {
			cin >> temp;
			v.push_back(temp);
		}
		
		cin >> js;
		
		for (int ind = 0; ind < x; ind++) 
			if (is_hit(v, js, ind)) counter++;
		
		cout << counter << endl;
		
		v.clear();
	}
	
	return 0;
}
