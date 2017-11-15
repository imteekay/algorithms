// https://www.urionlinejudge.com.br/judge/en/problems/view/1261

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	int n1, n2, points;
	cin >> n1 >> n2;
	map<string, int> wordPoints;
	string word;

	for (int i = 0; i < n1; i++) {
		cin >> word >> points;
		wordPoints[word] = points;
	}

	int totalPoints;
	string wordOfJobDescription;

	while (n2--) {
		totalPoints = 0;

		while(cin >> wordOfJobDescription && wordOfJobDescription != ".") {
			if (wordPoints.find(wordOfJobDescription) != wordPoints.end())
				totalPoints += wordPoints[wordOfJobDescription];
		}

		cout << totalPoints << endl;
	}

	return 0;
}