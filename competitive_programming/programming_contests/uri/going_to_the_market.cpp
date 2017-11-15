// https://www.urionlinejudge.com.br/judge/en/problems/view/1281

#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main() {
  string product;
  int n, numOfPrices, numOfProducts, num;
  float price, total;
  cin >> n;

  while (n--) {
    total = 0;
    map<string, float> m;
    cin >> numOfPrices;
    while (numOfPrices--) {
      cin >> product >> price;
      m[product] = price;
    }

    cin >> numOfProducts;
    while (numOfProducts--) {
      cin >> product >> num;
      total += m[product] * num;
    }

    cout << fixed << setprecision(2) << "R$ " << total << endl;
  }

  return 0;
}
