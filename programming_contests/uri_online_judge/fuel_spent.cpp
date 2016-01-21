// https://www.urionlinejudge.com.br/judge/en/problems/view/1017

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int time, velocity;

	cin >> time >> velocity;

	cout << fixed << setprecision(3) << time * velocity / 12.0 << endl;

	return 0;
}