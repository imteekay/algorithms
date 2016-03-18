// https://www.urionlinejudge.com.br/judge/en/problems/view/1120

#include <iostream>
#include <string>

using namespace std;

int main() {

  string error_num, contract_num, result = "";

  cin >> error_num >> contract_num;

  while (error_num != "0" || contract_num != "0") {

    for (int i = 0; i < contract_num.size(); i++) {
      if (error_num[0] != contract_num[i]) {
        if (result.size() > 0) result += contract_num[i];
        else if (contract_num[i] != '0') result += contract_num[i];
      }
    }

    if (result.size() > 0) cout << result << endl;
    else cout << 0 << endl;

    result.clear();
    cin >> error_num >> contract_num;
  }

  return 0;
}
