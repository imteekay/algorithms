// https://www.urionlinejudge.com.br/judge/en/problems/view/1704

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int n1, n2, temp, v, t;
	
	while (cin >> n1 >> n2) {
		while (n1--) {
			vector< pair<int, vector<int> > > group_of_tasks;
			cin >> v >> t;
			int exist_el = -1;
			
			vector<int> vec;
			vec.push_back(v);
			
			for (int i = 0; i < group_of_tasks.size(); i++) {
				if (t == group_of_tasks[i].first) exist_el = i;
				if (exist_el != -1) group_of_tasks[i].second.push_back(v);
				else group_of_tasks.push_back(make_pair(t, v));
			}
			
			for (int i = 0; i < group_of_tasks.size(); i++) {
				cout << group_of_tasks[i].first << " - ";
				for (int j = 0; j < group_of_tasks[i].second.size(); j++) cout << group_of_tasks[i].second[j] << " ";
				cout << endl;
			}
		}
	}
	
	return 0;
}
