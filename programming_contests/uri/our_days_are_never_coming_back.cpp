// https://www.urionlinejudge.com.br/judge/en/problems/view/1864

#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	cin >> n;

	string text = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	string final = "";

	for (int i = 0; i < n; i++) final += text[i];

	cout << final << endl;

	return 0;
}