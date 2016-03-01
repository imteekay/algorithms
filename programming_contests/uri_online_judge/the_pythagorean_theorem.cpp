// https://www.urionlinejudge.com.br/judge/en/problems/view/1582

#include <iostream>
#include <cmath>

using namespace std;

int mdc(int m, int n){
  int a = min(abs(m), abs(n));  
  while (m % a != 0 || n % a!= 0) a--;  
  return a;
 }

int main() {

	int n1, n2, n3;

	while (scanf("%d %d %d", &n1, &n2, &n3) != EOF) {
		int hip, cat1, cat2;

		if (n1 > n2 && n1 > n3) {
			hip = n1;
			cat1 = n2;
			cat2 = n3;
		} else if (n2 > n3) {
			hip = n2;
			cat1 = n1;
			cat2 = n3;
		} else {
			hip = n3;
			cat1 = n2;
			cat2 = n1;
		}

		hip = hip * hip;
		cat1 = cat1 * cat1;
		cat2 = cat2 * cat2;

		if (hip == cat1 + cat2) {
			if (mdc(mdc(hip, cat1), cat2) == 1) cout << "tripla pitagorica primitica" << endl;
			else cout << "tripla pitagorica" << endl;
		} else {
			cout << "tripla" << endl;
		}
	}

	return 0;
}