// OBI8

#include <iostream>
using namespace std;

int main() {
	
	int competidores, pontos, p1, p2, count=0;
	
	cin >> competidores;
	cin >> pontos;
	
	while (competidores--) {
		cin >> p1;
		cin >> p2;
		
		if (p1 + p2 >= pontos)
			count++;
	}
	
	cout << count;
	
	return 0;
}