// https://www.urionlinejudge.com.br/judge/en/problems/view/1026

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

void add_zero_values(vector<int> &v1, vector<int> &v2) {
  int v1_size = v1.size(), v2_size = v2.size(), difference;

  if (v1_size > v2_size) {
    difference = v1_size - v2_size;
    for (int j = 0; j < difference; j++) v2.push_back(0);
  } else if (v1_size < v2_size) {
    difference = v2_size - v1_size;
    for (int j = 0; j < difference; j++) v1.push_back(0);
  }
}

vector<int> to_binary_number(int n) {
  vector<int> v;
  while (n > 0) {
    v.push_back(n % 2);
    n /= 2;
  }

  return v;
}

int to_decimal(vector<int> &v) {
  int decimal_num = 0;
  int size = v.size();
  for (int i = 0; i < size; i++) if (v[i] == 1) decimal_num += pow(2, size-i-1);
  return decimal_num;
}

int main() {

  int num1, num2;

  while (scanf("%d %d", &num1, &num2) != EOF) {
    vector<int> binary_num1 = to_binary_number(num1);
    vector<int> binary_num2 = to_binary_number(num2);
    add_zero_values(binary_num1, binary_num2);
    reverse(binary_num1.begin(), binary_num1.end());
    reverse(binary_num2.begin(), binary_num2.end());

    vector<int> new_vec;

    for (int i = 0; i < binary_num2.size(); i++) {
      if (binary_num1[i] == binary_num2[i]) new_vec.push_back(0);
      else new_vec.push_back(1);
    }

    cout << to_decimal(new_vec) << endl;
  }

  return 0;
}
