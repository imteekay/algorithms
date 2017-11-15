// https://www.urionlinejudge.com.br/judge/en/problems/view/1588

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct team {
  int id;
  string name;
  int points;
  int wins;
  int goals;
};

bool compareTeams(const team &team1, const team &team2) {
	if (team1.points > team2.points) return true;
	else if (team1.points == team2.points) {
		if (team1.wins > team2.wins) return true;
		else if (team1.wins == team2.wins) {
			if (team1.goals > team2.goals) return true;
			else if (team1.goals == team2.goals && team1.id < team2.id) return true;
		}
	}

	return false;
}

int main() {

  int num, n, m, goal1, goal2;
  string name, player1, player2;
  cin >> num;
  
  while (num--) {
  	cin >> n >> m;
  	vector<team> teams;
  	
  	for (int i = 0; i < n; i++) {
  		teams.push_back(team());
  		cin >> name;
  		teams[i].id = i;
  		teams[i].name = name;
  		teams[i].points = 0;
  		teams[i].wins = 0;
  		teams[i].goals = 0;
  	}
  	
  	for (int i = 0; i < m; i++) {
  		cin >> goal1 >> player1 >> goal2 >> player2;

  		if (goal1 > goal2) {
	  		for (int j = 0; j < teams.size(); j++) {
	  			if (teams[j].name == player1) {
	  				teams[j].points += 3;
	  				teams[j].wins++;
	  				teams[j].goals += goal1;
	  			}
	  			
	  			if (teams[j].name == player2) teams[j].goals += goal2;
	  		}
	  	} else if (goal1 < goal2) {
	  		for (int j = 0; j < teams.size(); j++) {
	  			if (teams[j].name == player2) {
	  				teams[j].points += 3;
	  				teams[j].wins++;
	  				teams[j].goals += goal2;
	  			}
	  			
	  			if (teams[j].name == player1) teams[j].goals += goal1;
	  		}
	  	} else {
	  		for (int j = 0; j < teams.size(); j++) {
	  			if (teams[j].name == player1) {
	  				teams[j].points++;
	  				teams[j].goals += goal1;
	  			}
	  			
	  			if (teams[j].name == player2) {
	  				teams[j].points++;
	  				teams[j].goals += goal2;
	  			}
	  		}
	  	}
  		
  	}
  	
  	sort(teams.begin(), teams.end(), compareTeams);
  	
  	for (int i = 0; i < teams.size(); i++) {
  		cout << teams[i].name << endl;
  	}
  	
  }

  return 0;
}
