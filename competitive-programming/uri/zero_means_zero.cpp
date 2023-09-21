// https://www.urionlinejudge.com.br/judge/en/problems/view/1871

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {

  long int n1, n2, total;
  cin >> n1 >> n2;

  vector<int> numbers;

  while (n1 + n2 != 0) {

    total = n1 + n2;

    while (total != 0) {
      numbers.push_back(total % 10);
      total /= 10;
    }

    long int result = 0;
    int aux = 0;

    for (int i = 0; i < numbers.size(); i++) {
      if (numbers[i]) {
        result += numbers[i] * pow(10, aux);
        aux++;
      }
    }

    cout << result << endl;

    cin >> n1 >> n2;
    numbers.clear();
  }

  return 0;
}
