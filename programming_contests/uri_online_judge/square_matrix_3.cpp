// https://www.urionlinejudge.com.br/judge/en/problems/view/1557

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int num_of_spaces(int num) {
  int counter = 0;
  while (num > 0) {
    num /= 10;
    counter++;
  }

  return counter;
}

string get_spaces_between(int num) {
  string spaces = "";
  while (num > 0) {
    num /= 10;
    spaces += " ";
  }

  return spaces;
}

string get_spaces_left_side(int num) {
  string spaces = "";
  num /= 10;
  while (num > 0) {
    num /= 10;
    spaces += " ";
  }

  return spaces;
}

int main() {

  int n;
  cin >> n;

  while (n != 0) {

    vector<int> v;
    vector< vector<int> > table;

    for (int i = 0; i < n; i++) {
      for (int j = i; j < n+i; j++) {
        v.push_back(pow(2, j));
      }
      table.push_back(v);
      v.clear();
    }

    int last_num = table[n-1][n-1];
    string num_spaces_between = get_spaces_between(last_num);
    string num_spaces_left_side = get_spaces_left_side(last_num);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << num_spaces_left_side << table[i][j];
        if (j < n-1) cout << num_spaces_between;
      }
      cout << endl;
    }

    cout << endl;
    cin >> n;
  }

  return 0;
}
