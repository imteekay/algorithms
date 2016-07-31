// https://www.urionlinejudge.com.br/judge/en/problems/view/1088

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int numberOfSwaps;

bool countNumberOfSwaps(int n1, int n2) {
	if (n1 < n2) numberOfSwaps++;
	return n1 < n2;
}

int main() {
  int n, x;

  while (cin >> n && n != 0) {
    numberOfSwaps = 0;
    vector<int> v;
    
    while (n--) {
    	cin >> x;
    	v.push_back(x);
    }
    
	sort(v.begin(), v.end(), countNumberOfSwaps);
	if (numberOfSwaps % 2 == 0) cout << "Carlos" << endl;
    else cout << "Marcelo" << endl;
  }

  return 0;
}
