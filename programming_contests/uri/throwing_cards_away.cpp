// https://www.urionlinejudge.com.br/judge/en/problems/view/1110

#include <iostream>
#include <vector>

using namespace std;

struct num {
	int number;
	bool discarded;
};

int main() {
	int n;

	while (cin >> n && n != 0) {
		vector<num> numbers;
		vector<int> discardedNumbers;

		for (int i = 1; i <= n; i++) {
			num k;
			k.number = i;
			k.discarded = false;
			numbers.push_back(k);
		}

		int numberOfDiscardedNum = 0;
		int startIndex = 0;
		int counter;

		while (numberOfDiscardedNum < n - 1) {
			counter = 2;
			numbers[startIndex].discarded = true;
			discardedNumbers.push_back(numbers[startIndex].number);
			
			while (counter--) {
				startIndex++;
				if (startIndex >= n) startIndex = 0;
				while (numbers[startIndex].discarded) {
					startIndex++;
					if (startIndex >= n) startIndex = 0;
				}
			}

			numberOfDiscardedNum++;
		}

		cout << "Discarded cards: " << discardedNumbers[0];
		for (int i = 1; i < discardedNumbers.size(); i++) {
			cout << ", " << discardedNumbers[i];
		}

		cout << endl << "Remaining card: ";
		for (int i = 1; i < n; i++) {
			if (!numbers[i].discarded)
				cout << numbers[i].number << endl;
		}		
	}

	return 0;
}