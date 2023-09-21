// https://www.urionlinejudge.com.br/judge/en/problems/view/1984

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string numbers, inverse="";

	cin >> numbers;

	int numbers_size = numbers.size();

	for (int i = numbers_size-1; i >= 0; i--) inverse += numbers[i];

	cout << inverse << endl;

	return 0;
}