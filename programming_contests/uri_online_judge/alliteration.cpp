// https://www.urionlinejudge.com.br/judge/en/problems/view/1263

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void split_by_space(vector<string> &words, string phrase) {
  int index_start=0, length;
  string aux;
  for (int i = 0; i < phrase.size(); i++) {
    if (phrase[i] == ' ') {
      length = i - index_start;
      aux = phrase.substr(index_start, length);
      words.push_back(aux);
      index_start = i + 1;
    } else if (i == phrase.size()-1) {
      length = i - index_start + 1;
      aux = phrase.substr(index_start, length);
      words.push_back(aux);
    }
  }
}

int main() {

  string phrase;
  string alphabet = "ABCDEFGHIJKLMNOPQRSTUVXWYZabcdefghijklmnopqrstuvxwyzABCDEFGHIJKLMNOPQRSTUVXWYZ";
  vector<string> words;

  while (getline(cin, phrase)) {
    vector<int> alli;
    alli.push_back(0);
    split_by_space(words, phrase);
    char current_letter = words[0][0]; // first letter of the first word

    if (words.size() > 1) {
      for (int i = 1; i < words.size(); i++) {
        int letter_pos = alphabet.find(words[i][0]);
        if (current_letter == alphabet[letter_pos] || current_letter == alphabet[letter_pos + 26]) {
          alli.back()++;
        } else {
          alli.push_back(0);
        }

        current_letter = words[i][0];
      }

      int counter = 0;

      for (int i = 0; i < alli.size(); i++) if (alli[i] > 0) counter++;

      cout << counter << endl;

    } else {
      cout << 0 << endl;
    }

    words.clear();
    alli.clear();
  }

  return 0;
}
