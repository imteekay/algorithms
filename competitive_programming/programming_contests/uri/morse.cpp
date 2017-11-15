// https://www.urionlinejudge.com.br/judge/pt/problems/view/2338

#include <iostream>
#include <string>

using namespace std;

void createMorseTable(map<string, string> &morse) {
  morse[".-"] = "a";
  morse["-..."] = "b";
  morse["-.-."] = "c";
  morse["-.."] = "d";
  morse["."] = "e";
  morse["..-."] = "f";
  morse["--."] = "g";
  morse["...."] = "h";
  morse[".."] = "i";
  morse[".---"] = "j";
  morse["-.-"] = "k";
  morse[".-.."] = "l";
  morse["--"] = "m";
  morse["-."] = "n";
  morse["---"] = "o";
  morse[".--."] = "p";
  morse["--.-"] = "q";
  morse[".-."] = "r";
  morse["..."] = "s";
  morse["-"] = "t";
  morse["..-"] = "u";
  morse["...-"] = "v";
  morse[".--"] = "w";
  morse["-..-"] = "x";
  morse["-.--"] = "y";
  morse["--.."] = "z";
}

string buildCode(string partial, int j) {
  if (partial.find("...") != string::npos) {
    return morse[substr(j, partial.find("..."))];
  }

  return morse[substr(partial.find("...")+3, partial.size()-partial.find("...")+3)];
}

int main() {
  int N, i, j;
  string s, result, partial;

  while (N--) {
    map<string, string> morse;
	  createMorseTable(morse);
    cin >> s;
    result = "";
    i = 0, j = 0;

    while (i < s.size()) {
      if (s.find(".......") != string::npos) {
        while (j < s.size()) {
          partial = substr(i, s.find("......."));
          result += buildCode(partial, j);
          j = partial.find("...")+3;
        }
      } else {
        while (j < s.size()) {
          partial = substr(i, s.size()-s.find(".......")+7);
          result += buildCode(partial, j);
          j = partial.find("...")+3;
        }
      }
    }
  }

  return 0;
}
