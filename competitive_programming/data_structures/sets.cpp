// add an element, but do not allow duples [duplicates?]
// remove elements
// get count of elements (distinct elements)
// check whether elements are present in set

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {

  set<int> s;

  // adding elements to set
  for (int i = 0; i <= 100; i++)
    s.insert(i);

  // set doesn't accept duplicate elements
  s.insert(50);

  // need to be 101 (100 elements + 0 number)
  cout << s.size() << endl;

  // remove even numbers
  for (int i = 0; i <= 100; i+=2)
    s.erase(i);

  // need to be 50
  cout << s.size() << endl;

  // calculate the sum of set elements
  int total = 0;
  for (set<int>::const_iterator iterator = s.begin(); iterator != s.end(); iterator++)
    total += *iterator;

  cout << total << endl;

  // removing the duplicates from a vector
  vector<int> v;
  for (int i = 10; i > 0; i--)
    v.push_back(i);

  v.push_back(5);

  set<int> s2;
  for (int i = 1; i <= 10; i++)
    s2.insert(v[i]);

  vector<int> v2;
  for (set<int>::const_iterator iterator = s2.begin(); iterator != s2.end(); iterator++)
    v2.push_back(*iterator);

  for (int i = 0; i < 10; i++)
    cout << v2[i] << endl;

  return 0;
}
