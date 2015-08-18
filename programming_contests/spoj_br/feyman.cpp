// FEYNMAN

#include <iostream>
using namespace std;

int quad(int n) {
  
  if (n == 1)
    return 1;

  return ((n * n) + quad(n-1));
}

int main() {
	
	int n;
	cin >> n;
	
	while(n != 0) {
		cout << quad(n) << endl;
		cin >> n;
	}
	
	return 0;
}