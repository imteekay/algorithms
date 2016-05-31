// https://www.urionlinejudge.com.br/judge/en/problems/view/1516

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string concatenate(char c, int times) {
  string new_string = "";
  for (int i = 0; i < times; i++) new_string += c;
  return new_string;
}

int main() {

  int m, n, a, b;

  cin >> m >> n;

  while (m + n != 0) {
    string v = "";
    vector<string> draw;
    char pixel;

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cin >> pixel;
        v += pixel;
      }

      draw.push_back(v);
      v.clear();
    }

    cin >> a >> b;
    int mult_m = a / m, mult_n = b / n;

    for (int i = 0; i < m; i++) {
      string line = "";
      for (int j = 0; j < n; j++) line += concatenate(draw[i][j], mult_n);
      for (int x = 0; x < mult_m; x++) cout << line << endl;
    }

    cout << endl;
    draw.clear();
    cin >> m >> n;
  }

  return 0;
}
