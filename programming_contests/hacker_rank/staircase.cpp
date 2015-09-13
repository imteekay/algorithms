#include <string>
#include <iostream>

using namespace std;

int main() {

	int n;
	string result="";

	cin >> n;
	int total = n;

	while (n) {

		for (int i = 1; i < n; i++)
			result += " ";

		int num_symbol = total + 1 - n;

		for (int i = 0; i < num_symbol; i++) {
			result += "#";
		}

		cout << result << endl;
		result.clear();
		n--;
	}

	return 0;
}
