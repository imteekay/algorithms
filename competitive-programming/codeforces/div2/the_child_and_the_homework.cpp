// http://codeforces.com/contest/437/problem/A

#include <bits/stdc++.h>

using namespace std;

string solve(string a, string b, string c, string d) {
  bool a_smaller = (a.size()-2 <= (b.size()-2) / 2) && (a.size()-2 <= (c.size()-2) / 2) && (a.size()-2 <= (d.size()-2) / 2),
       a_bigger = (a.size()-2 >= (b.size()-2) * 2) && (a.size()-2 >= (c.size()-2) * 2) && (a.size()-2 >= (d.size()-2) * 2),
       b_smaller = (b.size()-2 <= (a.size()-2) / 2) && (b.size()-2 <= (c.size()-2) / 2) && (b.size()-2 <= (d.size()-2) / 2),
       b_bigger = (b.size()-2 >= (a.size()-2) * 2) && (b.size()-2 >= (c.size()-2) * 2) && (b.size()-2 >= (d.size()-2) * 2),
       c_smaller = (c.size()-2 <= (a.size()-2) / 2) && (c.size()-2 <= (b.size()-2) / 2) && (c.size()-2 <= (d.size()-2) / 2),
       c_bigger = (c.size()-2 >= (a.size()-2) * 2) && (c.size()-2 >= (b.size()-2) * 2) && (c.size()-2 >= (d.size()-2) * 2),
       d_smaller = (d.size()-2 <= (a.size()-2) / 2) && (d.size()-2 <= (b.size()-2) / 2) && (d.size()-2 <= (c.size()-2) / 2),
       d_bigger = (d.size()-2 >= (b.size()-2) * 2) && (d.size()-2 >= (a.size()-2) * 2) && (d.size()-2 >= (c.size()-2) * 2);

  vector<string> great_choices;
  if (a_bigger || a_smaller) great_choices.push_back("A");
  if (b_bigger || b_smaller) great_choices.push_back("B");
  if (c_bigger || c_smaller) great_choices.push_back("C");
  if (d_bigger || d_smaller) great_choices.push_back("D");
  if (great_choices.size() == 1) return great_choices[0];
  return "C";
}

int main() {
  string a, b, c, d;

  cin >> a >> b >> c >> d;

  cout << solve(a, b, c, d) << endl;

  return 0;
}
