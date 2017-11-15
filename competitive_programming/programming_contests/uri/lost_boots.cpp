// https://www.urionlinejudge.com.br/judge/en/problems/view/1245

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {

	int n;
	
	while (cin >> n) {
		map<int, map<string, int> > boots;
		int num;
		string side;
	
		for (int i = 0; i < n; i++) {
			cin >> num >> side;
			
			if (boots.find(num) == boots.end()) {
				map<string, int> sides;
				sides[side] = 1;
				boots[num] = sides;
			} else {
				if (boots[num].find(side) == boots[num].end()) {
					boots[num][side] = 1;
				} else {
					boots[num][side]++;
				}
			}
		}
		
		int counter = 0;
		
		for (map<int, map<string, int> >::iterator it = boots.begin(); it != boots.end(); it++) {
			if (it->second["D"] < it->second["E"]) counter += it->second["D"];
			else counter += it->second["E"];
		}
		
		cout << counter << endl;
	}

	return 0;
}
