// https://www.urionlinejudge.com.br/judge/en/problems/view/1215

#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

vector<string> parseString(string word) {
  vector<string> v;
  int len = 0, base = 0, ascChar;

  for (int i = 0; i < word.size(); i++) {
    ascChar = word[i];
    if (ascChar < 65 || (ascChar > 90 && ascChar < 97) || ascChar > 122) {
      v.push_back(word.substr(base, len));
      base = i+1;
      len = -1;
    }

    len++;
  }

  v.push_back(word.substr(base, len));

  return v;
}

string lowerCase(string word) {
  string lowerCaseWord = "";
  char charac;
  int ascChar;

  for (int i = 0; i < word.size(); i++) {
    ascChar = word[i];
    if (ascChar >= 65 && ascChar <= 90) {
      charac = ascChar + 32;
      lowerCaseWord += charac;
    } else {
      lowerCaseWord += word[i];
    }
  }

  return lowerCaseWord;
}

int main() {
  string word, parsedWord;
  set<string> s;
  vector<string> v;

  while (cin >> word) {
    v = parseString(word);
    for (int i = 0; i < v.size(); i++) {
      parsedWord = lowerCase(v[i]);
      if (parsedWord != "" && parsedWord != " ") s.insert(parsedWord);
    }
  }

  for (set<string>::iterator it = s.begin(); it != s.end(); ++it)
    cout << *it << endl;

  return 0;
}
