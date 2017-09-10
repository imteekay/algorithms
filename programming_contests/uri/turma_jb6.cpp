// https://www.urionlinejudge.com.br/judge/pt/problems/view/2626

#include <iostream>
#include <string>

using namespace std;

int main() {
  string j1, j2, j3;

  while (cin >> j1 >> j2 >> j3) {
    if (j1 == "papel" && j2 == "pedra" && j3 == j2 || j1 == "pedra" && j2 == "tesoura" && j3 == j2 || j1 == "tesoura" && j2 == "papel" && j3 == j2) {
      cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
    } else if (j2 == "papel" && j1 == "pedra" && j3 == j1 || j2 == "pedra" && j1 == "tesoura" && j3 == j1 || j2 == "tesoura" && j1 == "papel" && j3 == j1) {
      cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
    } else if (j3 == "papel" && j1 == "pedra" && j2 == j1 || j3 == "pedra" && j1 == "tesoura" && j2 == j1 || j3 == "tesoura" && j1 == "papel" && j2 == j1) {
      cout << "Urano perdeu algo muito precioso..." << endl;
    } else {
      cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
    }
  }

  return 0;
}
