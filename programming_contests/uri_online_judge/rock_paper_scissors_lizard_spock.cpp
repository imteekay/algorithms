// https://www.urionlinejudge.com.br/judge/en/problems/view/1873

#include <iostream>
#include <string>

using namespace std;

string get_winner(string type1, string type2) {
  if (type1 == "tesoura" && type2 == "papel") return "rajesh";
  else if (type1 == "papel" && type2 == "pedra") return "rajesh";
  else if (type1 == "pedra" && type2 == "lagarto") return "rajesh";
  else if (type1 == "lagarto" && type2 == "spock") return "rajesh";
  else if (type1 == "spock" && type2 == "tesoura") return "rajesh";
  else if (type1 == "tesoura" && type2 == "lagarto") return "rajesh";
  else if (type1 == "lagarto" && type2 == "papel") return "rajesh";
  else if (type1 == "papel" && type2 == "spock") return "rajesh";
  else if (type1 == "spock" && type2 == "pedra") return "rajesh";
  else if (type1 == "pedra" && type2 == "tesoura") return "rajesh";
  else if (type1 == type2) return "empate";
  else return "sheldon";
}

int main() {

  int n;
  string rajesh, sheldon;

  cin >> n;

  while (n--) {
    cin >> rajesh >> sheldon;
    cout << get_winner(rajesh, sheldon) << endl;
  }

  return 0;
}
