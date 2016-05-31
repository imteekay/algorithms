// https://www.urionlinejudge.com.br/judge/en/problems/view/1546

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	
	int n, k, x;
	vector<string> team_members;
	team_members.push_back("Rolien");
	team_members.push_back("Naej");
	team_members.push_back("Elehcim");
	team_members.push_back("Odranoel");
	
	cin >> n;
	
	while (n--) {
		cin >> k;
		
		while (k--) {
			cin >> x;
			cout << team_members[x-1] << endl;
		}
	}
	
	return 0;
}
