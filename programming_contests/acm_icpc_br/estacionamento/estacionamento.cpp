#include <vector>
#include <iostream>

using namespace std;

int main() {

  int v, p, result=0;

  cin >> v >> p;

  while (v + p != 0) {
    vector<int> v1;
    vector< vector<int> > v2;

    while (p--) {
      int he, me, hs, ms, found=0;
      cin >> he >> me >> hs >> ms;
      v1.push_back(he);
      v1.push_back(me);
      v1.push_back(hs);
      v1.push_back(ms);

      if (v > 0) {
        v2.push_back(v1);
        v--;
      } else {
        for (int i = 0; i < v2.size(); i++) {
          if (v1[0] > v2[i][2] || (v1[0] == v2[i][2] && v1[1] > v2[i][3])) {
            v2.push_back(v1);
            found = 1;
            break;
          }
        }

        if (!found) result++;
      }

      v1.clear();
    }

    cout << result << endl;
    cin >> v >> p;
  }

  return 0;
}
