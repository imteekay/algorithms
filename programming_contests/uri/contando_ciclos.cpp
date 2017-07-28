// https://www.urionlinejudge.com.br/judge/pt/problems/view/2497

#include <iostream>

using namespace std;

int main() {
  int N, counter = 1;

  while (cin >> N && N != -1) {
    cout << "Experiment " << counter << ": " << N / 2 << " full cycle(s)" << endl;
    counter++;
  }

  return 0;
}
