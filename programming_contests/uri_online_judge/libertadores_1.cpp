// https://www.urionlinejudge.com.br/judge/en/problems/view/1536

#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

vector<string> parse_string(string line) {
	vector<string> v;
	string word = "";
	
	for (int i = 0; i < line.size(); i++) {
		if (line[i] == ' ') {
			v.push_back(word);
			word.clear();
		} else if (i == line.size() - 1) {
			word += line[i];
			v.push_back(word);
			word.clear();
		} else {
			word += line[i];
		}
	}
	
	return v;
}

int to_digit(char digit) {
  return digit - '0';
}

int string_to_number(string n) {
  if (n == "") {
    return -1;
  } else {
    int num = 0;

    for (int i = 0; i < n.size(); i++) {
      num = num * 10 + to_digit(n[i]);
    }

    return num;
  }
}

struct team {
	int points;
	int goals_difference;
	int goals_away;
};

int main() {
	
	vector<string> matches;
	int n;
	cin >> n;
	cin.ignore();
	string match;
	
	while (n--) {
		team team1, team2;
		team1.points = 0;
		team1.goals_difference = 0;
		team1.goals_away = 0;
		team2.points = 0;
		team2.goals_difference = 0;
		team2.goals_away = 0;
		
		getline(cin, match);
		matches = parse_string(match);
		int goals1 = string_to_number(matches.front());
		int goals2 = string_to_number(matches.back());
		if (goals1 > goals2) team1.points += 3;
		else if (goals1 < goals2) team2.points += 3;
		else {
			team1.points += 1;
			team2.points += 1;
		}
		team1.goals_difference += goals1;
		team2.goals_difference += goals2;
		team2.goals_away += goals2;
		
		getline(cin, match);
		matches = parse_string(match);
		goals1 = string_to_number(matches.front());
		goals2 = string_to_number(matches.back());
		if (goals1 > goals2) team2.points += 3;
		else if (goals1 < goals2) team2.points += 3;
		else {
			team1.points += 1;
			team2.points += 1;
		}
		team2.goals_difference += goals1;
		team1.goals_difference += goals2;
		team1.goals_away += goals2;
		
		if (team1.points > team2.points) cout << "Time 1" << endl;
		else if (team2.points > team1.points) cout << "Time 2" << endl;
		else if (team1.goals_difference > team2.goals_difference) cout << "Time 1" << endl;
		else if (team1.goals_difference < team2.goals_difference) cout << "Time 2" << endl;
		else if (team1.goals_away > team2.goals_away) cout << "Time 1" << endl;
		else if (team1.goals_away < team2.goals_away) cout << "Time 2" << endl;
		else cout << "Penaltis" << endl;
	}
	
	return 0;
}
