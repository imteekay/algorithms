// https://www.urionlinejudge.com.br/judge/en/problems/view/1303

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

struct team {
  int id;
  int points;
  int scores;
  int scoresConceded;
  int games;
};

bool untie(const team &t1, const team &t2) {
  if (t1.points > t2.points) return true;
  else if (t1.points < t2.points) return false;
  else {
    float team1AverageBasket, team2AverageBasket;

    if (t1.scoresConceded) team1AverageBasket = t1.scores / t1.scoresConceded;
    else team1AverageBasket = t1.scores;

    if (t2.scoresConceded) team2AverageBasket = t2.scores / t2.scoresConceded;
    else team2AverageBasket = t2.scores;

    if (team1AverageBasket > team2AverageBasket) return true;
    else if (team1AverageBasket < team2AverageBasket) return true;
    else {
      if (t1.points > t2.points) return true;
      else if (t1.points < t2.points) return false;
      else {
        if (t1.games < t2.games) return true;
        else if (t1.games > t2.games) return false;
      }
    }
  }
}

int main() {
  int n, p1, p2, score1, score2;

  while (cin >> n && n != 0) {
    vector<team> teams;
    map<int, team> t;

    for (int i = 0; i < n * (n-1) / 2; i++) {
      cin >> p1 >> score1 >> p2 >> score2;

      if (score1 > score2) {
        if (t.find(p1) != t.end()) {
          t[p1].points += 2;
          t[p1].scores += score1;
          t[p1].scoresConceded += score2;
          t[p1].games++;
          if (t.find(p2) != t.end()) {
            t[p2].points++;
            t[p2].scores += score2;
            t[p2].scoresConceded += score1;
            t[p2].games++;
          } else {
            team te;
            te.id = p2;
            te.points = 1;
            te.scores = score2;
            te.scoresConceded = score1;
            te.games = 1;
            t[p2] = te;
          }
        } else {
          team te;
          te.id = p1;
          te.points = 2;
          te.scores = score1;
          te.scoresConceded = score2;
          te.games = 1;
          t[p1] = te;
          if (t.find(p2) != t.end()) {
            t[p2].points++;
            t[p2].scores += score2;
            t[p2].scoresConceded += score1;
            t[p2].games++;
          } else {
            team te;
            te.id = p2;
            te.points = 1;
            te.scores = score2;
            te.scoresConceded = score1;
            te.games = 1;
            t[p2] = te;
          }
        }
      } else if (score1 < score2) {
        if (t.find(p1) != t.end()) {
          t[p1].points++;
          t[p1].scores += score1;
          t[p1].games++;
          if (t.find(p2) != t.end()) {
            t[p2].points += 2;
            t[p2].scores += score2;
            t[p2].games++;
          } else {
            team te;
            te.id = p2;
            te.points = 2;
            te.scores = score2;
            te.games = 1;
            t[p2] = te;
          }
        } else {
          team te;
          te.id = p1;
          te.points = 1;
          te.scores = score1;
          te.games = 1;
          t[p1] = te;
          if (t.find(p2) != t.end()) {
            t[p2].points += 2;
            t[p2].scores += score2;
            t[p2].games++;
          } else {
            team te;
            te.id = p2;
            te.points = 2;
            te.scores = score2;
            te.games = 1;
            t[p2] = te;
          }
        }
      }

      // cout << "Player1: " << p1 << " - " << score1;
      // cout << " / Player2: " << p2 << " - " << score2 << endl;
      // if (t.find(3) != t.end()) cout << t[3].points << " " << t[3].scores << " " << t[3].scoresConceded << " " << t[3].games << endl;
    }

    for (map<int, team>::iterator it = t.begin(); it != t.end(); ++it) {
      teams.push_back(it->second);
    }

    sort(teams.begin(), teams.end(), untie);

    cout << teams[0].id;
    for (int i = 1; i < teams.size(); i++) {
      cout << " " << teams[i].id;
    }
    cout << endl;
  }

  return 0;
}
