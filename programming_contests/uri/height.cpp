// https://www.urionlinejudge.com.br/judge/en/problems/view/1566

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, x, num;
  scanf("%i", &n);

  while (n--) {
    vector<int> v;
    scanf("%i", &num);
    for (int i = 0; i < num; i++) {
      scanf("%i", &x);
      v.push_back(x);
    }
    sort(v.begin(), v.end());
    printf("%i", v[0]);
    for (int i = 1; i < num; i++) printf(" %i", v[i]);
    printf("\n");
  }

  return 0;
}

