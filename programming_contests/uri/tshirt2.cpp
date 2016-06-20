// https://www.urionlinejudge.com.br/judge/en/problems/view/1258

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct tshirt {
  string color;
  char tshirtSize;
};

int main() {
  int n;
  string name, tshirt, color;

  while (cin >> n && n != 0) {
    cin.ignore();
    vector< pair< tshirt, vector<string> > > clothes;
    vector<string> v;

    while (n--) {
      getline(cin, name);
      cin >> tshirt >> color;


    }


  }

  return 0;
}
