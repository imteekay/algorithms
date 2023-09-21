// https://www.urionlinejudge.com.br/judge/en/problems/view/1523

#include <iostream>
#include <vector>

using namespace std;

struct car {
  int arrive;
  int left;
};

int main() {
  int N, K, arrive, left;
  bool can;
  cin >> N >> K;

  while (N + K != 0)   {
    vector<car> parking_lot;
    can = true;

    while (N--) {
      cin >> arrive >> left;
      car c;
      c.arrive = arrive;
      c.left = left;

      while (parking_lot.size() > 0 && parking_lot.back().left <= arrive) parking_lot.pop_back();

      if ((parking_lot.size() >= K && c.arrive < parking_lot.back().left) || parking_lot.size() > 0 && c.left > parking_lot.back().left) {
        can = false;
      } else {
        parking_lot.push_back(c);
      }
    }

    if (can) cout << "Sim" << endl;
    else cout << "Nao" << endl;

    cin >> N >> K;
  }

  return 0;
}
