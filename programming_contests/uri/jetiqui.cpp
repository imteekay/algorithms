// https://www.urionlinejudge.com.br/judge/pt/problems/view/2587

#include <iostream>
#include <string>

using namespace std;

int main() {
  int N, index1 = -1, index2;
  string word1, word2, word;

  cin >> N;

  while (N--) {
    cin >> word1 >> word2 >> word;

    for (int i = 0; i < word.size(); i++) {
      if (word[i] == '_') {
        if (index1 == -1) index1 = i;
        else index2 = i;
      }
    }

    if (word1[index1] == word2[index2] || word1[index2] == word2[index1]) cout << "Y" << endl;
    else cout << "N" << endl;
  }

  return 0;
}
