// https://www.urionlinejudge.com.br/judge/en/problems/view/1973

#include <iostream>
#include <vector>

using namespace std;

int main() {

  long long int n, x, total=0, total_capture=0, start_counter=0;
  cin >> n;

  vector<int> v;
  vector<int> v1;

  for (int i = 1; i <= n; i++) {
    cin >> x;
    total += x;
    v.push_back(x);
    v1.push_back(1);
  }

  int i = 0;

  while (true) {
    cout << v[i] << endl;
    if (v[i] == 0 || i < 0 || i >= n) break;

    v1.at(i) = 0;
    int j = i;

    if (v[i] % 2 == 0) i--;
    else i++;

    v[j]--;
    total_capture++;
    j = i;
  }

  for (int i = 0; i < n; i++) if (v1[i] == 0) start_counter++;

  cout << start_counter << " " << total - total_capture << endl;

  return 0;
}
