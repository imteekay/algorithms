#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

  int a=0, b=1;

  // min value between 2 elements
  cout << min(a, b) << endl;

  // max value between 2 elements
  cout << max(a, b) << endl;

  // swap values
  swap(a, b);
  cout << a << endl;
  cout << b << endl;

  // sorting a vector
  vector<int> vetorzin;
  for (int i = 10; i >= 0; i--)
    vetorzin.push_back(i);

  sort(vetorzin.begin(), vetorzin.end());

  for (int i = 0; i <= 10; i++)
    cout << vetorzin[i] << " ";

  cout << endl;

  sort(vetorzin.begin(), vetorzin.end(), greater<int>());

  for (int i = 0; i <= 10; i++)
    cout << vetorzin[i] << " ";

  cout << endl;

  for (int i = 0; i < 4; i++)
    cout << vetorzin[i] << " ";

  cout << endl;

  return 0;
}
