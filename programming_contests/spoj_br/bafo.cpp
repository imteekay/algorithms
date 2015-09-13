// BAFO

#include <iostream>
#include <string>
using namespace std;

int main() {

  int n, t_beto=0, t_aldo=0, x, y, counter=1;
  string result;

  cin >> n;

  if(n == 0)
    return 0;

  while(n != 0) {

    for (int i = 0; i < n; i++) {
      cin >> x >> y;
      t_aldo += x;
      t_beto += y;
    }

    if (t_aldo > t_beto)
      result = "Aldo";
    else
      result = "Beto";

    cout << "Teste " << counter << endl;
    cout << result << endl << endl;

    cin >> n;
    counter++;
    t_beto = 0;
    t_aldo = 0;
  }
}
