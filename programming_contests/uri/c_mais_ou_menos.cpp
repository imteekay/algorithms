// https://www.urionlinejudge.com.br/judge/en/problems/view/2486

#include <iostream>
#include <string>

using namespace std;

int get_vitamine_c(string fruit) {
  if (fruit == "suco de laranja") return 120;
  else if (fruit == "morango fresco") return 85;
  else if (fruit == "mamao") return 85;
  else if (fruit == "goiaba vermelha") return 70;
  else if (fruit == "manga") return 56;
  else if (fruit == "laranja") return	50;
  else return 34;
}

int main() {
  int N, num, total_vitamine;
  string fruit;

  cin >> N;

  while (N != 0) {
    total_vitamine = 0;

    while (N--) {
      cin >> num;
      cin.ignore();
      getline(cin, fruit);
      total_vitamine += num * get_vitamine_c(fruit);
    }

    if (total_vitamine < 110) cout << "Mais " << 110 - total_vitamine << " mg" << endl;
    else if (total_vitamine > 130) cout << "Menos " << total_vitamine - 130 << " mg" << endl;
    else cout << total_vitamine << " mg" << endl;

    cin >> N;
  }

  return 0;
}
