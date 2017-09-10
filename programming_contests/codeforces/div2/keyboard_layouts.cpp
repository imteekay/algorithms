// http://codeforces.com/problemset/problem/831/B

#include <iostream>
#include <string>

using namespace std;

bool is_uppercase(char word) {
  string original_alphabet = "ABCDEFGHIJKLMNOPQRSTUVXWYZabcdefghijklmnopqrstuvxwyz";
  return original_alphabet.find(word) < 26;
}

char build_new_word(char letter, string alpha1, string alpha2) {
  string original_alphabet = "ABCDEFGHIJKLMNOPQRSTUVXWYZabcdefghijklmnopqrstuvxwyz", numbers = "0123456789";

  if (numbers.find(letter) >= 0 && numbers.find(letter) <= 9)
    return letter;
  else if (is_uppercase(letter)) {
    char l = original_alphabet[original_alphabet.find(letter) + 26];
    int index = alpha1.find(l);
    char new_l = alpha2[index];
    return original_alphabet[original_alphabet.find(new_l) - 26];
  }

  return alpha2[alpha1.find(letter)];
}

int main() {
  string alpha1, alpha2, word, result;

  cin >> alpha1 >> alpha2 >> word;

  for (int i = 0; i < word.size(); i++) {
    result += build_new_word(word[i], alpha1, alpha2);
  }

  cout << result << endl;

  return 0;
}
