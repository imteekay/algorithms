#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string is_rectangular(int a, int b, int c) {
  if (c * c == a * a + b * b) return "Retangulo: S";
  return "Retangulo: N";
}

int main() {
  vector<int> V;
  int N = 3, side;

  while (N--) {
    cin >> side;
    V.push_back(side);
  }

  sort(V.begin(), V.end());

  if (V[2] >= V[0] + V[1]) {
    cout << "Invalido" << endl;
  } else {
    if (V[0] == V[1] && V[1] == V[2]) {
      cout << "Valido-Equilatero" << endl;
      cout << "Retangulo: N" << endl;
    } else if (V[0] == V[1] || V[1] == V[2]) {
      cout << "Valido-Isoceles" << endl;
      cout << is_rectangular(V[0], V[1], V[2]) << endl;
    } else {
      cout << "Valido-Escaleno" << endl;
      cout << is_rectangular(V[0], V[1], V[2]) << endl;
    }
  }

  return 0;
}
