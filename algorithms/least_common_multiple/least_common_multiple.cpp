#include <iostream>
using namespace std;

int lcm(int num1, int num2) {
    int remainder, n1 = num1, n2 = num2;

    do {
        remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    } while (remainder != 0);

    return (num1 * num2) / n1;
}

int main() {
	
	cout << lcm(6, 3) << endl;
	
	return 0;
}