#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int N, X, Y;
  vector<string> V;
  cin >> N;

  V.push_back("PROXYCITY");
  V.push_back("P.Y.N.G.");
  V.push_back("DNSUEY!");
  V.push_back("SERVERS");
  V.push_back("HOST!");
  V.push_back("CRIPTONIZE");
  V.push_back("OFFLINE DAY");
  V.push_back("SALT");
  V.push_back("ANSWER!");
  V.push_back("RAR?");
  V.push_back("WIFI ANTENNAS");

  while (N--) {
    cin >> X >> Y;
    cout << V[X+Y] << endl;
  }

  return 0;
}
