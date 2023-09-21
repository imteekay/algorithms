// https://www.urionlinejudge.com.br/judge/en/problems/view/1430

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	string val, id = "WHQESTX";
	vector<float> v;

	v.push_back(1.0);
	v.push_back(1.0/2);
	v.push_back(1.0/4);
	v.push_back(1.0/8);
	v.push_back(1.0/16);
	v.push_back(1.0/32);
	v.push_back(1.0/64);

	while (cin >> val && val != "*") {

		int counter = 0;
		float duration = 0;
		int index;

		for (int i = 0; i < val.size(); i++) {			
			if (val[i] == '/') {
				if (duration == 1) counter++;
				duration = 0;				
			} else {
				index = id.find(val[i]);
				duration += v[index];
			}
		}

		cout << counter << endl;

	}

	return 0;
}