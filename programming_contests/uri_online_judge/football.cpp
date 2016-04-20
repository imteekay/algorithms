#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	int matches, num_buy, goals1, goals2;
	
	while (cin >> matches >> num_buy) {
		vector<int> pos, neg, zeros;
		
		for (int i = 0; i < matches; i++) {
			cin >> goals1 >> goals2;
			if (goals1 - goals2 == 0) zeros.push_back(0);
			else if (goals1 - goals2 < 0) neg.push_back(goals1 - goals2);
			else pos.push_back(goals1 - goals2);
		}
		
		int counter = 0;
		counter += pos.size() * 3;

			for (int i = 0; i < zeros.size(); i++) {
				if (num_buy > 0) {
					zeros[i]++;
					num_buy--;
					counter += 3;
				} else {
					counter++;
				}
			}
			
			sort(neg.begin(), neg.end(), greater<int>());

			if (num_buy > 0) {
				int ind = 0;
				while (ind < neg.size()) {
					if (num_buy <= 0) break;
					neg[ind]++;
					num_buy--;
					if (neg[ind] > 0) ind++;
				}
			}
		
		for (int i = 0; i < neg.size(); i++) {
			if (neg[i] == 0) counter++;
			else if (neg[i] > 0) counter += 3;
		}
		
		cout << counter << endl;
	}
	
	return 0;
}
