#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<int> vi;

#define pb push_back

int main() {
  vector<vii> AdjList;
  vii vectorOfPairs;

  vectorOfPairs.pb(make_pair(1, 50)); // Vertice 0 connected with vertice 1 and weight 50
  AdjList.pb(vectorOfPairs);

  vectorOfPairs.clear();
  vectorOfPairs.pb(make_pair(0, 50)); // Vertice 0 connected with vertice 1 and weight 50
  vectorOfPairs.pb(make_pair(2, 20)); // Vertice 1 connected with vertice 2 and weight 20
  vectorOfPairs.pb(make_pair(3, 30)); // Vertice 1 connected with vertice 3 and weight 30
  AdjList.pb(vectorOfPairs);

  vectorOfPairs.clear();
  vectorOfPairs.pb(make_pair(1, 20)); // Vertice 2 connected with vertice 1 and weight 20
  vectorOfPairs.pb(make_pair(3, 40)); // Vertice 2 connected with vertice 3 and weight 40
  AdjList.pb(vectorOfPairs);

  vectorOfPairs.clear();
  vectorOfPairs.pb(make_pair(1, 30)); // Vertice 3 connected with vertice 1 and weight 30
  vectorOfPairs.pb(make_pair(2, 40)); // Vertice 2 connected with vertice 3 and weight 40
  vectorOfPairs.pb(make_pair(4, 60)); // Vertice 3 connected with vertice 4 and weight 60
  AdjList.pb(vectorOfPairs);

  vectorOfPairs.clear();
  vectorOfPairs.pb(make_pair(3, 60)); // Vertice 4 connected with vertice 3 and weight 60
  AdjList.pb(vectorOfPairs);

  for (int i = 0; i < AdjList.size(); i++) {
    for (int j = 0; j < AdjList[i].size(); j++) {
      cout << "Vertice: " << i;
      cout << " connected with vertice " << AdjList[i][j].first;
      cout << " with weight " << AdjList[i][j].second << endl;
    }
    cout << endl;
  }

  return 0;
}
