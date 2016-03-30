// https://www.urionlinejudge.com.br/judge/en/problems/view/2031

#include <iostream>
#include <string>

using namespace std;

int main() {

  int n;
  cin >> n;
  string player1, player2;

  while (n--) {
    cin >> player1 >> player2;

    if (player1 == player2) {
      if (player1 == "ataque") cout << "Aniquilacao mutua" << endl;
      else if (player1 == "pedra") cout << "Sem ganhador" << endl;
      else cout << "Ambos venceram" << endl;
    } else {
      if (player1 == "ataque" && player2 == "pedra") cout << "Jogador 1 venceu" << endl;
      else if (player2 == "ataque" && player1 == "pedra") cout << "Jogador 2 venceu" << endl;
      else if (player1 == "pedra" && player2 == "papel") cout << "Jogador 1 venceu" << endl;
      else if (player2 == "pedra" && player1 == "papel") cout << "Jogador 2 venceu" << endl;
      else if (player1 == "ataque" && player2 == "papel") cout << "Jogador 1 venceu" << endl;
      else if (player2 == "ataque" && player1 == "papel") cout << "Jogador 2 venceu" << endl;
    }
  }

  return 0;
}
