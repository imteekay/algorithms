// https://www.urionlinejudge.com.br/judge/en/problems/view/1332

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int verify_num(string num, string number, int n) {
  int total = num.size(), sum = 0;
  for (int j = 0; j < num.size(); j++) if (num[j] == number[j]) sum++;
  if (sum + 1 >= total) return n;
  return -1;
}

int main() {

  int n;
  cin >> n;

  string number;
  vector<string> numbers;
  numbers.push_back("one");
  numbers.push_back("two");
  numbers.push_back("three");

  while (n--) {
    cin >> number;
    for (int i = 0; i < 3; i++) {
      int result = verify_num(numbers[i], number, i+1);
      if (result != -1) {
        cout << result << endl;
        break;
      }
    }
  }

  return 0;
}
