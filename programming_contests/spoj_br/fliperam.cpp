#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {

  int n1, n2, temp;
  vector<int> v;

  cin >> n1 >> n2;

  int n = n1;

  while (n--) {
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end(), greater<int>());

  for (int i = 0; i < n2; i++) {
    cout << v[i] << endl;
  }

  return 0;
}
