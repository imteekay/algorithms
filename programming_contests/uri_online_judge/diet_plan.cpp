// https://www.urionlinejudge.com.br/judge/en/problems/view/1248

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n;
	string diet, breakfest, lunch;
	vector< pair<char, bool> > valid_chars;

	cin >> n;

	while (n--) {
		bool is_cheating = true;
		cin >> diet >> breakfest >> lunch;

		for (int i = 0; i < breakfest.size(); i++) valid_chars.push_back(make_pair(breakfest[i], true));
		for (int i = 0; i < lunch.size(); i++) valid_chars.push_back(make_pair(lunch[i], true));

		int find_char;

		for (int i = 0; i < breakfest.size(); i++) {
			find_char = diet.find(breakfest[i]);
			if (find_char == -1) {
				is_cheating = false;
				break;
			} else {
				for (int j = 0; j < valid_chars.size(); j++) if (valid_chars[j].first == breakfest[i]) valid_chars[j].second = false;
			}
		}


		if (!is_cheating) {
			for (int i = 0; i < lunch.size(); i++) {
				find_char = diet.find(lunch[i]);
				if (find_char == -1) {
					is_cheating = false;
					break;
				} else {
					for (int j = 0; j < valid_chars.size(); j++) if (valid_chars[j].first == lunch[i]) valid_chars[j].second = false;
				}
			}

			if (is_cheating) cout << "CHEATER" << endl;
			else {
				string result = "";
				for (int index = 0; index < valid_chars.size(); index++) if (valid_chars[index].second) result += valid_chars[index].first;
				sort(result.begin(), result.end());
				cout << result << endl;
			}
		} else {
			cout << "CHEATER" << endl;
		}

		valid_chars.clear();
	}

	return 0;
}
