// https://www.urionlinejudge.com.br/judge/en/problems/view/1582

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

#define min(m,n) ((m) < (n) ? (m) : (n))

int mdc(int m, int n){
	int a = min(abs(m), abs(n));;
	while (m % a != 0 || n % a != 0) a--;
 	return a;
}

int main(){
    int x, y, z;
    while(cin >> x >> y >> z) {
        int hip, c1, c2;
        if(z >= y && z >= x) { 
        	hip = z; 
        	c1 = y;
        	c2 = x;
        } else if (y >= z && y >= x) {
        	hip = y; 
        	c1 = z;
        	c2 = x;
        } else if (x >= z && x >= y) { 
        	hip = x; 
        	c1 = z; 
        	c2 = y;
        }

        printf("tripla");
	    
	    if(hip * hip == (c1 * c1 + c2 * c2)) {
	        printf(" pitagorica");
	        if(mdc(mdc(x,y), z) == 1) printf(" primitiva");
	    }
	    
    	cout << endl;
    }

    return 0;
}
