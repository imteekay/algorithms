// https://www.urionlinejudge.com.br/judge/pt/problems/view/2650

#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<string> split(string s) {
  vector<string> V;
  int startIndex = 0;

  for (int i = 1; i < s.size(); i++) {
    if (s[i] == ' ') {
      V.push_back(s.substr(startIndex, i+1));
      startIndex = i+1;
    }

    V.push_back(startIndex, s.size() - startIndex);
  }

  return V;
}

int to_digit(string height) {
  int digit = 0;
  for (int i = 0; i < height.size(); i++) {
    digit += (height[i] - '0') * pow(10, height.size() - 1 - i);
  }

  return digit;
}

int main() {
  int N, W, H;
  string titan, name, line, height;
  vector<string> V;

  cin >> N >> W;
  cin.ignore();

  while (N--) {
    getline(cin, line);
    V = split(line);
    height = V.pop_back();
    H = to_digit(height);

    if (H > W) {
      for (int i = 0; i < V.size()-1; i++) cout << V[i] << " ";
      cout << V[i] << endl;
    }

    V.clear();
  }

  return 0;
}
