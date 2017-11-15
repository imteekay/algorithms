#include <iostream>
using namespace std;

int main() {
  string s1 = "abcdefghiz", s2 = "aaaaaaaaaa";

  int counter = 0, counter1 = 0, counter2 = 0, counterz = 0;

  for (int i = 0; i < s1.size(); i++) counterz += 'z';
  for (int i = 0; i < s1.size(); i++) counter1 += s1[i];
  for (int i = 0; i < s2.size(); i++) counter2 += s2[i];

  cout << counterz - counter1 + counter1 - counter2 << endl;
  cout << counterz << endl;
  cout << counter1 << endl;
  cout << counter2 << endl;

  for (int i = 0; i < s1.size(); i++) {
    counter += (s2[i] - s1[i]);
  }

  //cout << counter << endl;

  return 0;
}
