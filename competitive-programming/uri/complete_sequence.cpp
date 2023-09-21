// https://www.urionlinejudge.com.br/judge/en/problems/view/1551

#include <iostream>
#include <string>

using namespace std;

bool find_letter(char c) {
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  if (alphabet.find(c) != -1) return true;
  return false;
}

bool not_in_phrase(char c, string phrase) {
  if (phrase.find(c) == -1) return true;
  return false;
}

int main() {
  int n;
  cin >> n;
  cin.ignore();
  string phrase;

  while (n--) {
    getline(cin, phrase);
    string letters_on_phrase = "";

    for (int i = 0; i < phrase.size(); i++) {
      if (find_letter(phrase[i]) && not_in_phrase(phrase[i], letters_on_phrase)) letters_on_phrase += phrase[i];
    }

    if (letters_on_phrase.size() == 26) cout << "frase completa" << endl;
    else if (letters_on_phrase.size() >= 13) cout << "frase quase completa" << endl;
    else cout << "frase mal elaborada" << endl;
  }

  return 0;
}
