// https://www.urionlinejudge.com.br/judge/en/problems/view/1249

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string word;
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVXWYZABCDEFGHIJKLMNOPQRSTUVXWYZabcdefghijklmnopqrstuvxwyzabcdefghijklmnopqrstuvxwyz";

	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		// verificar se existe letra no alpha
		int index = alpha.find(word[i]);
		index += 13;
	}	

	return 0;
}