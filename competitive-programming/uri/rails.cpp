// https://www.urionlinejudge.com.br/judge/en/problems/view/1062

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void clear(queue<int> &q) {
   queue<int> empty;
   swap(q, empty);
}

bool canMarshalInTheRequiredOrder(queue<int> &train) {
	stack<int> order;
	order.push(1);
	int max = train.size(), wagonNumber = 2;

	while (true) {
		if (!train.empty() && !order.empty() && train.front() == order.top()) {
			train.pop();
			order.pop();
		} else if (wagonNumber <= max) {
			order.push(wagonNumber);
			wagonNumber++;
		} else {
			return false;
		}

		if (train.empty()) return true;
	}	
}

int main() {
	int n, x;
	queue<int> train;
	
	while (cin >> n && n != 0) {
		while (cin >> x && x != 0) {
			train.push(x);

			for (int i = 1; i < n; i++) {
				cin >> x;
				train.push(x);
			}

			if (canMarshalInTheRequiredOrder(train)) cout << "Yes" << endl;
			else cout << "No" << endl;

			clear(train);
		}

		cout << endl;
	}

	return 0;
}