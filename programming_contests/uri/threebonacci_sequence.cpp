// https://www.urionlinejudge.com.br/judge/en/problems/view/1739

#include <iostream>
#include <map>

using namespace std;

bool hasDigitThree(int n) {
  bool has = false;
  while (n) {
    if (n % 10 == 3) {
      has = true;
      break;
    }

    n /= 10;
  }

  return has;
}

unsigned long long int fibonacci(int n) {
  map<int, int> ar, threebonacci;
  ar[1] = 1;
  ar[2] = 1;
  int counter = 0;

  for (int i = 3; counter <= 60; i++) {
    ar[i] = ar[i-1] + ar[i-2];
    if ((ar[i] % 3 == 0 || hasDigitThree(ar[i]))) {
      counter++;
      threebonacci[counter] = ar[i];
    }

    if (counter >= n) break;
  }

  return threebonacci[n];
}

int main() {
  int n;
  while (cin >> n) {
    cout << fibonacci(n) << endl;
  }

  return 0;
}
