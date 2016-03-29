// https://www.urionlinejudge.com.br/judge/en/problems/view/1098

#include <iostream>
#include <vector>

using namespace std;

int main() {

  float i = 0;
  vector<float> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  while (i < 2.1) {
    for (int a = 0; a < 3; a++) cout << "I=" << i << " J=" << v[a] << endl;
    for (int j = 0; j < 3; j++) v[j] += 0.2;
    i += 0.2;
  }

  return 0;
}
