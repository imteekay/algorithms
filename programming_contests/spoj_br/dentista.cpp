// JDENTIST

#include <iostream>
#include <vector>
using namespace std;

int main() {

  int n, x, y, counter=0, status=1;
  vector<int> consult;
  vector< vector<int> > memo;

  cin >> n;

  while (n--) {

    cin >> x;
    cin >> y;    

    if (!memo.empty()) {
      for (int i = 0; i < memo.size(); i++) {
        if ((x < memo[i][0] && y <= memo[i][0]) || (x >= memo[i][1] && y > memo[i][1])) {          
        } else {
          status = 0;
        }
      }
    }

    if (status) {
      counter++;
      consult.push_back(x);
      consult.push_back(y);
      memo.push_back(consult);
    }

    status = 1;
    consult.clear();
  }

  for(int i = 0; i < memo.size(); i++) {
    cout << memo[i][0] << " - " << memo[i][1] << endl;
  }

  cout << counter;

}