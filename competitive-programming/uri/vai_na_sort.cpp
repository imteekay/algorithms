// https://www.urionlinejudge.com.br/judge/en/problems/view/2592

#include <iostream>

using namespace std;

int main() {
  int N, num, counter, count;
  bool right;

  while (cin >> N && N != 0) {
    right = false;
    counter = 0;

    while (!right) {
    	count = 0;
      for (int i = 1; i <= N; i++) {
        cin >> num;
        if (num == i) count++;
      }

      right = count == N;
      counter++;
    }

    cout << counter << endl;
  }

  return 0;
}
