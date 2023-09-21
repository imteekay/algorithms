#include <stdio.h>
#include <iostream>

using namespace std;
 
int max(int a, int b) { 
  return (a > b)? a : b; 
}
 
int knapsack(int W, int wt[], int val[], int n) {
  int i, w;
  int K[n+1][W+1];
 
  for (i = 0; i <= n; i++) {
    for (w = 0; w <= W; w++) {
      if (i==0 || w==0) K[i][w] = 0;
      else if (wt[i-1] <= w) K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
      else K[i][w] = K[i-1][w];
    }
  }
 
  return K[n][W];
}
 
int main() {  
  int W, n, test=1; 

  cin >> W >> n;
 
  while (W + n != 0) {
 
    int wt[n], val[n];
 
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      wt[i] = x;
      val[i] = y;
    }
 
    cout << "Teste " << test << endl;
    printf("%d", knapsack(W, wt, val, n));
    cout << endl << endl;
 
    cin >> W >> n;
    test++;
  }  
  
  return 0;
}