// https://www.urionlinejudge.com.br/judge/en/problems/view/2502

#include <iostream>
#include <string>

using namespace std;

string to_lowercase(string a) {
  string alphabet = "ABCDEFGHIJKLMNOPQRSTUVXWYZabcdefghijklmnopqrstuvxwyz";
  string result = "";

  for (int i = 0; i < a.size(); i++) {
    if (alphabet.find(a[i]) <= 25) result += alphabet[alphabet.find(a[i])+26];
    else result += a[i];
  }

  return result;
}

string decipher(string phrase, string f, string s) {
  string deciphered = "";

  for (int i = 0; i < phrase.size(); i++) {
    if (f.find(phrase[i]) != string::npos) deciphered += s[f.find(phrase[i])];
    else deciphered += phrase[i];
  }

  return deciphered;
}

int main() {
  int N, C;
  string f, s, phrase;

  while (cin >> N >> C) {
    cin >> s >> f;
    s = to_lowercase(s);
    f = to_lowercase(f);

    while (C--) {
      cin.ignore();
      getline(cin, phrase);
      cout << decipher(phrase, f, s) << endl;
    }
    cout << endl;
  }

  return 0;
}
