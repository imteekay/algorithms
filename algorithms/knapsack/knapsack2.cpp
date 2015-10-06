#include <iostream>
#include <vector>

using namespace std;

int max(int a, int b) { 
  return (a > b)? a : b; 
}
 
int knapsack(int totalWeight, vector<int> &weights, vector<int> &values, int n) {  
  int K[n+1][totalWeight+1];
 
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= totalWeight; j++) {
      if (i == 0 || j == 0) K[i][j] = 0;
      else if (weights[i-1] <= j) K[i][j] = max(values[i-1] + K[i-1][j - weights[i-1]],  K[i-1][j]);
      else K[i][j] = K[i-1][j];
    }
  }

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= totalWeight; j++)
    	cout << K[i][j] << " ";

    cout << endl;
  }
 
  return K[n][totalWeight];
}
 
int main() {  
  int v[] = { 4, 1, 2, 5 };
  int w[] = { 100, 100, 120, 80 };
  
  vector<int> values;
  vector<int> weights;

  for (int i = 0; i < 4; ++i)
  	values.push_back(v[i]);  

  for (int i = 0; i < 4; ++i)
	  weights.push_back(v[i]);

  int totalWeight = 200;
  int n = values.size();
  
  cout << knapsack(totalWeight, weights, values, n) << endl;
  
  return 0;
}