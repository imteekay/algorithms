// https://www.urionlinejudge.com.br/judge/en/problems/toolkit/2005

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  int n1, n2, temp, food;
  vector<int> hunger;

  while (cin >> n1 >> n2) {
    for (int i = 0; i < n1; i++) {
      cin >> temp;
      hunger.push_back(temp);
    }

    sort(hunger.begin(), hunger.end(), greater<int>());

    int counter = 0;

    while (n2--) {
      cin >> food;
      sort(hunger.begin(), hunger.end(), greater<int>());
      bool can_satisfy_hunger = false;

      for (int j = 0; j < hunger.size(); j++) {
        if ((hunger[j] - food <= 0) && hunger[j] > 0) {
          hunger[j] -= food;
          can_satisfy_hunger = true;
          counter++;
          break;
        }
      }

      if (!can_satisfy_hunger) {
        for (int j = 0; j < hunger.size(); j++) {
          if (hunger[j] > 0) {
            hunger[j] -= food;
            if (hunger[j] <= 0) counter++;
            break;
          }
        }
      }

    }

    cout << counter << endl;
    hunger.clear();
  }

  return 0;
}
