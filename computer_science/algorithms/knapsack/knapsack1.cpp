#include <stdio.h>
 
int max(int a, int b) { 
  return (a > b)? a : b; 
}
 
int knapsack(int totalWeight, int weights[], int values[], int n) {  
  int K[n+1][totalWeight+1];
 
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= totalWeight; j++) {
      if (i == 0 || j == 0) K[i][j] = 0;
      else if (weights[i-1] <= j) K[i][j] = max(values[i-1] + K[i-1][j - weights[i-1]],  K[i-1][j]);
      else K[i][j] = K[i-1][j];
    }
  }
 
  return K[n][totalWeight];
}
 
int main() {  
  int values[] = { 4, 1, 2, 5 };
  int weighs[] = { 100, 100, 120, 80 };
  int totalWeight = 200;
  int n = sizeof(values) / sizeof(values[0]);
  
  printf("%d\n", knapsack(totalWeight, weighs, values, n));
  
  return 0;
}