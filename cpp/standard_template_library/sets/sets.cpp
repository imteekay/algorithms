// add an element, but do not allow duples [duplicates?]
// remove elements
// get count of elements (distinct elements)
// check whether elements are present in set

#include <iostream>
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

  return 0;
}
