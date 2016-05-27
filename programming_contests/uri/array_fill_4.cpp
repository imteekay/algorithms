// https://www.urionlinejudge.com.br/judge/en/problems/view/1179

#include <iostream>
#include <vector>

using namespace std;

bool is_full(vector<int> &v) {
  if (v.size() == 5) return true;
  return false;
}

int main() {

  vector<int> even;
  vector<int> odd;
  int num;

  for (int i = 0; i < 15; i++) {

    cin >> num;
    if (num % 2 == 0) even.push_back(num);
    else odd.push_back(num);

    if (is_full(odd)) {
      for (int j = 0; j < 5; j++) cout << "impar[" << j << "] = " << odd[j] << endl;
      odd.clear();
    }

    if (is_full(even)) {
      for (int j = 0; j < 5; j++) cout << "par[" << j << "] = " << even[j] << endl;
      even.clear();
    }

  }

  for (int o_index = 0; o_index < odd.size(); o_index++) cout << "impar[" << o_index << "] = " << odd[o_index] << endl;

  for (int e_index = 0; e_index < even.size(); e_index++) cout << "par[" << e_index << "] = " << even[e_index] << endl;

  return 0;
}
