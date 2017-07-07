#include <iostream>

using namespace std;

int main() {
  int N, M, cityX, cityY, monsterX, monsterY, X, seconds;

  while (cin >> N >> M) {
    seconds = 0;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        cin >> X;

        if (X == 1) {
          cityY = i;
          cityX = j;
        } else if (X == 2) {
          monsterY = i;
          monsterX = j;
        }
      }
    }

    if (cityX > monsterX) seconds += cityX - monsterX;
    else seconds += monsterX - cityX;
    if (cityY > monsterY) seconds += cityY - monsterY;
    else seconds += monsterY - cityY;
    cout << seconds << endl;
  }

  return 0;
}
