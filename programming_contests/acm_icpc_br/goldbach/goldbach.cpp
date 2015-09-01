#include<stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int verifica_primo(int n) {
	int total_divisivel = 0;


	if (n == 2) {
		return 1;
	}
	if ((n % 2) == 0)
		return 0;


	int s = sqrt(n);

	for (int i = 3; i <= s; i += 2) {
		if (n % i == 0){
			return 0;
		}
	}

	return 1;
}

int main()
{
    

    int n, n1, n2;
    scanf("%i", &n);

    while (n != 0) {

    	if (n % 2 != 0)
    		cout << "erro" << endl;
    	else {
    		for (int i = 2; i <= n; i++) {
    			if (verifica_primo(i)) {
    				n1 = i;
    				if (verifica_primo(n-n1)) {
    					n2 = n - n1;
    					break;
    				}
    			}
    		}

    		cout << n1 << " " << n2 << endl;
    	}

    	scanf("%i", &n);
    }

    return 0;
}
