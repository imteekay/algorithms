// PECA7

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	
	int time, result, temp;
	vector<int> numbers;

	cin >> time;
	result = time;
	
	for(int i = 0; i < time-1; i++) {
		cin >> temp;
		numbers.push_back(temp);
	}
	
	sort(numbers.begin(), numbers.end());
	
	for(int j = 0; j < numbers.size(); j++) {
		if (j+1 != numbers[j]) {
			result = j+1;
			break;
		}
	}
	
	cout << result;

	return 0;
}
