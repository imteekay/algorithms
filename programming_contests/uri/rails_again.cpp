// https://www.urionlinejudge.com.br/judge/en/problems/view/1062

#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

string requiredOrder(queue<char> &t, queue<char> &order) {
	stack<char> train;
	int max = t.size(), wagonNumber = 1;
	string result = "";

	while (true) {
		if (!train.empty() && !order.empty() && train.top() == order.front()) {
			train.pop();
			order.pop();
			result += "R";
		} else if (wagonNumber <= max) {
			wagonNumber++;
			train.push(t.front());
			t.pop();			
			result += "I";
		} else {
			return result + " Impossible";
		}

		if (order.empty()) return result;
	}	
}

int main() {
	int n;
	char el;
	
	while (cin >> n && n != 0) {
		queue<char> train;
		queue<char> order;

		for (int i = 0; i < n; i++) {
			cin >> el;
			train.push(el);
		}

		for (int i = 0; i < n; i++) {
			cin >> el;
			order.push(el);
		}		

		cout << requiredOrder(train, order) << endl;
	}	

	return 0;
}