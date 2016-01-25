// https://www.urionlinejudge.com.br/judge/en/problems/view/1052

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	vector<string> v;

	v.push_back("January");
	v.push_back("February");
	v.push_back("March");
	v.push_back("April");
	v.push_back("May");
	v.push_back("June");
	v.push_back("July");
	v.push_back("August");
	v.push_back("September");
	v.push_back("October");
	v.push_back("November");
	v.push_back("December");

	int n;

	cin >> n;

	cout << v[n-1] << endl;

	return 0;
}