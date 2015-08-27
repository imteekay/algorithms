#include <string>
#include <vector>
#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;

int solvePartEquation(string part_equation, int value) {
  int result, inicio=0, constante, expo;

  int x = part_equation.find("x");
  stringstream ss1; ss1 << part_equation.substr(0, x); ss1 >> constante;
  stringstream ss2; ss2 << part_equation.substr(x+1, part_equation.size()-x); ss2 >> expo;  

  result = constante * (pow(value, expo));

  return result;
}

int main() {

  int n, time=1, i_inicio=0, total;
  string temp;
  vector<string> vetor_de_valores, vetor_de_variaveis, vetor_de_sinais;
  vector<int> vetor_de_resultados;

  cin >> n;

  while (n--) {
    string equacao;
    int number_of_values;

    cin >> equacao;
    cin >> number_of_values;

    for (int i = 0; i < number_of_values; i++){
      cin >> temp;
      vetor_de_valores.push_back(temp);
    }

    for (int i = 0; i < equacao.size(); i++) {
      if (equacao[i] == '+' || equacao[i] == '-') {
        vetor_de_variaveis.push_back(equacao.substr(i_inicio, i-i_inicio));
        vetor_de_sinais.push_back(equacao.substr(i, 1));
        i_inicio = i+1;
      }
    }

    for (int i = 0; i < vetor_de_valores.size(); i++) {
      int valor;
      stringstream ss; ss << vetor_de_valores[i]; ss >> valor;      
      total = solvePartEquation(vetor_de_variaveis[0], valor);
      for (int j = 1; j < vetor_de_variaveis.size(); j++){
        if (vetor_de_sinais[j-1] == "+")
          total += solvePartEquation(vetor_de_variaveis[j], valor);
        else
          total -= solvePartEquation(vetor_de_variaveis[j], valor);

        vetor_de_resultados.push_back(total);
      }
    }

    cout << "Caso " << time << ": ";
    for (int i = 0; vetor_de_resultados.size(); i++)
      cout << vetor_de_resultados[i] << " ";

    cout << endl;
    time++;
  }


  return 0;
}
