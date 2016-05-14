#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> v;
	char result = 'Y';
	
	for (int i = 0; i < 5; i++) {
		cin >> n;
		v.push_back(n);
	}
	
	for (int i = 0; i < 5; i++) {
		cin >> n;
		if (n == v[i]) {
			result = 'N';
			break;
		}
	}
	
	cout << result << endl;
	
	return 0;
}
