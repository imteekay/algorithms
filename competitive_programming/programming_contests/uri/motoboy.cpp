// https://www.urionlinejudge.com.br/judge/pt/problems/view/1286

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max(int a, int b) {
  return a > b? a : b;
}

struct Obj {
  int time, pizza;
};

bool sortByPizza(Obj obj1, Obj obj2) {
  if (obj1.pizza < obj2.pizza) return true;
  else if (obj1.pizza > obj2.pizza) return false;
  else return obj1.time < obj2.time;
}

int main() {
  int N, P, time, pizza;

  while (cin >> N && N) {
    vector<Obj> objects;
    cin >> P;

    for (int i = 0; i < N; i++) {
      cin >> time >> pizza;
      Obj object;
      object.time = time;
      object.pizza = pizza;
      objects.push_back(object);
    }

    sort(objects.begin(), objects.end(), sortByPizza);

    int dp[N][P+1];

    for (int i = 0; i <= P; i++) {
      if (objects[0].pizza <= i) dp[0][i] = objects[0].time;
      else dp[0][i] = 0;
    }

    for (int i = 1; i < N; i++) {
      for (int j = 0; j < P; j++) {
        if (j - objects[i].pizza >= 0) dp[i][j] = max(dp[i-1][j - objects[i].pizza] + objects[i].time, dp[i-1][j]);
        else dp[i][j] = dp[i-1][j];
      }
    }

    cout << dp[N-1][P-1] << " min."<< endl;
  }

  return 0;
}
