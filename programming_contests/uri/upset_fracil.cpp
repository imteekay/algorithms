// https://www.urionlinejudge.com.br/judge/en/problems/view/2005

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

struct msComparator {
  bool operator() (const int &lhs, const int &rhs) const { return lhs > rhs; }
};

int main() {
  int n1, n2, temp, food, decremented;

  while (cin >> n1 >> n2) {
    multiset<int, msComparator> ms;
    multiset<int, msComparator>::iterator it;

    for (int i = 0; i < n1; i++) {
      cin >> temp;
      ms.insert(temp);
    }    

    int counter = 0;

    while (n2--) {
      cin >> food;
      bool hunger_satisfied = false;

      for (it = ms.begin(); it != ms.end(); ++it) {
        if (food >= *it && *it > 0) {
          counter++;
          ms.erase(*it);
          hunger_satisfied = true;
          break;
        }
      }

      if (!hunger_satisfied) {
        multiset<int, msComparator>::iterator first = ms.begin();
        decremented = *first;
        ms.erase(first);
        ms.insert(decremented - food);
      }
    }

    cout << counter << endl;
  }

  return 0;
}
