// https://www.urionlinejudge.com.br/judge/en/problems/view/1026

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

void add_zero_values(vector<int> &v) {
  int total_num_of_values = v.size();
  int num_needed = 0;
  for (int i = 4; i < total_num_of_values; i += 4) num_needed += i;
  num_needed += 4;
  int difference = num_needed - total_num_of_values;
  for (int j = 0; j < difference; j++) v.push_back(0);
}

vector<int> to_binary_number(int n) {
  vector<int> v;
  while (n > 0) {
    v.push_back(n % 2);
    n /= 2;
  }

  add_zero_values(v);
  reverse(v.begin(), v.end());
  return v;
}

int to_decimal(vector<int> &v) {
  int decimal_num = 0;
  int size = v.size();
  for (int i = 0; i < size; i++) if (v[i] == 1) decimal_num += pow(2, size-i);
  return decimal_num;
}

int main() {

  int num1, num2;

  while (cin >> num1 >> num2) {
    vector<int> binary_num1 = to_binary_number(num1);
    vector<int> binary_num2 = to_binary_number(num2);
    vector<int> new_vec;

    for (int i = 0; i < binary_num2.size(); i++) {
      if (binary_num1[i] == binary_num2[i]) new_vec.push_back(0);
      else new_vec.push_back(1);
    }

    cout << to_decimal(new_vec) << endl;
  }

  return 0;
}
