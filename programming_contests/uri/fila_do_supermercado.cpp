#include <iostream>
#include <vector>
#include <map>

using namespace std;

int getIndexOfSmallerTimeSpent(map<int, int> &m) {
	int smaller = 99999, index = 0;
	map<int, int>::iterator it;
	for (it = m.begin(); it != end(); it++) {
		if (it->second < smaller) {
			smaller = it->second;
			index = it->first;
		}
	}

	return index;
}

int main() {
	int cashiers, clients, x;
	cin >> cashiers >> clients;

	vector<int> ca, cli;

	for (int i = 0; i < cashiers; i++) {
		cin >> x;
		ca.push_back(x);
	}

	for (int i = 0; i < clients; i++) {
		cin >> x;
		cli.push_back(x);
	}

	map<int, int> t_gastos;

	for (int i = 0; i < cashiers; i++) {
		t_gastos[i] = cashiers[i] * clients[i];
	}

	int index = getIndexOfSmallerTimeSpent(m);

	return 0;
}