// https://www.urionlinejudge.com.br/judge/en/problems/view/2542

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M, L, X, m_choice, l_choice;

  while (cin >> N) {
    vector< vector<int> > m_cards;
    vector< vector<int> > l_cards;
    cin >> M >> L;

    while (M--) {
      vector<int> card;
      for (int i = 0; i < N; i++) {
        cin >> X;
        card.push_back(X);
      }

      m_cards.push_back(card);
    }

    while (L--) {
      vector<int> card;
      for (int i = 0; i < N; i++) {
        cin >> X;
        card.push_back(X);
      }

      l_cards.push_back(card);
    }

    cin >> m_choice >> l_choice >> X;

    if (m_cards[m_choice-1][X-1] > l_cards[l_choice-1][X-1]) cout << "Marcos" << endl;
    else if (m_cards[m_choice-1][X-1] < l_cards[l_choice-1][X-1]) cout << "Leonardo" << endl;
    else cout << "Empate" << endl;
  }

  return 0;
}
