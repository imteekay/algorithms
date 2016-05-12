#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;

bool has_four(string number) {
	
	for (int i = 0; i < number.length(); i++)
		if (number[i] == '4') return true;

	return false;
}

bool has_thirteen(string number) {	

	for (int i = 0; i < number.length()-1; i++)
		if (number[i] == '1' && number[i+1] == '3') return true;				

	return false;
}

int main () {

	int n, total=0;

	while (scanf("%d", &n) != EOF) {
		ostringstream converter;
		converter << n;
		string number = converter.str();

		for (int i = 0; i < n; i++) {
			if (has_four(number) || has_thirteen(number)) total++;
			cout << total << endl;
		}

		cout << n + total << endl;
		total = 0;
	}	

	return 0;
}