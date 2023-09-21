#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iterator>
using namespace std;

int main() {
	
	string frase;
	vector<string> palavras;
	
	getline(cin, frase);
	
	while(frase != "*") {
		transform(frase.begin(), frase.end(), frase.begin(), ::tolower);
		istringstream iss(frase);
		copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(palavras));
		
		char letra = frase[0];
		char result = 'Y';
		
		for(int i = 0; i < palavras.size(); i++) {
			if(palavras[i][0] != letra) {
				result = 'N';
				break;
			}
		}
		
		cout << result << endl;
		getline(cin, frase);
		palavras.clear();
	}
	
	return 0;
}