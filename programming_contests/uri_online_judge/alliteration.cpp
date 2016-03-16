// https://www.urionlinejudge.com.br/judge/en/problems/view/1263

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void split_by_space(vector<string> &words, string phrase) {
  int index_start=0, index_end;
  for (int i = 0; i < phrase.size(); i++) {
    if (pharse[i] == ' ' || i == phrase.size()-1) {
      index_end = i;
      words.push_pack(phrase.substr(index_start, index_end));
      index_start = index_end + 1;
    }
  }
}

int main() {

  string phrase;
  string alphabet = "ABCDEFGHIJKLMNOPQRSTUVXWYZabcsdefghijklmnopqrstuvxwyz";
  vector<string> words;
  int counter = 0;

  while (getline(cin, phrase) != EOF) {
    split_by_space(v, phrase);
    char current_letter = word[i][0];
    int current_letter_pos = word[i][0];

    if (words.size() > 1) {
      for (int i = 1; i < words.size(); i++) {
        int letter_pos = alphabet.find(words[i][0]);
      }
    }

    words.clear();
    counter = 0;
  }

  return 0;
}
