#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	long double X;
	cin >> X;
	cout << showpos << uppercase << scientific << setprecision(4) << X << endl;
	return 0;
}
