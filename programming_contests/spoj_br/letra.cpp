// LETRA14

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <iomanip>
using namespace std;

int main() {

	int end, start=0, n=0;
	float total;
	string frase, letra, last;
	vector<string> palavras;
	
	getline(cin, letra);
	getline(cin, frase);
	
	istringstream iss(frase);
	copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(palavras));
	
	for(int i = 0; i < palavras.size(); i++) {
		if(palavras[i].find(letra) != string::npos)
			n++;
	}
	
	total = palavras.size();
	
	cout << fixed << setprecision(1) << (n / total) * 100;
	
	return 0;
}