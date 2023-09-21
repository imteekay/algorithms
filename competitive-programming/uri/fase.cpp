#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N, M, num;
  vector<int> V;

  cin >> N >> M;

  while (N--) {
    cin >> num;
    V.push_back(num);
  }

  sort(V.begin(), V.end(), greater<int>());

  int result = M;

  for (int i = M; i < V.size(); i++) {
    if (V[i] == V[i-1]) result++;
    else break;
  }

  cout << result << endl;

  return 0;
}
