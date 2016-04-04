// https://www.urionlinejudge.com.br/judge/en/problems/view/1309

#include <iostream>
#include <string>

using namespace std;

bool under_ten(string cents) {
	if (cents == "0" || cents == "1" || cents == "2" || cents == "3" || cents == "4" || cents == "5" || cents == "6" || cents == "7" || cents == "8" || cents == "9") return true;
	return false;
}

string reverse_string(string s) {
	string result_string = "";
	for (int i = s.size()-1; i >= 0; i--) result_string += s[i];
	return result_string;
}

string parse_string(string s, string cents) {
	string new_s = "";
	new_s += cents[1];
	new_s += cents[0];
	new_s += ".";
	
	int comma = 1;
	
	for (int i = s.size()-1; i >= 0; i--) {
		new_s += s[i];
		if (comma == 3 && i != 0) {
			new_s += ",";
			comma = 1;
		} else {
			comma++;
		}
	}
	
	new_s += "$";
	new_s = reverse_string(new_s);
	return new_s;
}

int main() {

	string money, cents;
	
	while (cin >> money) {
		cin >> cents;
		if (under_ten(cents)) cents = "0" + cents;

		int money_size = money.size();
		string real_money = parse_string(money, cents);
		cout << real_money << endl;
	}
	
	return 0;
}
