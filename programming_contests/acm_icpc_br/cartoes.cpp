#include <vector>
#include <iostream>

using namespace std;

int is_alberto_turn(int counter) {
  if (counter % 2 == 0)
    return 1;

  return 0;
}

int main() {

  int n, temp;
  vector<int> v, vetor_a;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back(temp);
  }

  for (int i = 0; i < n; i++) {

    if (is_alberto_turn(i)) {
      if (v[0] > v.back()) {
        vetor_a.push_back(v[0]);
        v.erase(v.begin());
      } else {
        vetor_a.push_back(v.back());
        v.pop_back();
      }
    } else if (v.size() > 1) {
      if (v[0] > v.back())
        v.erase(v.begin());
      else
        v.pop_back();
    }
  }

  int total = 0;

  for (int i = 0; i < n; i++)
    total += vetor_a[i];

  cout << total << endl;

  return 0;
}
