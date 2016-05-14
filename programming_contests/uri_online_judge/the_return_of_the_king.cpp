#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int to_digit(char digit) {
  return digit - '0';
}

int string_to_number(string n) {
  if (n == "") {
    return -1;
  } else {
    int num = 0;

    for (int i = 0; i < n.size(); i++) {
      num = num * 10 + to_digit(n[i]);
    }

    return num;
  }
}

int main() {
	string num;
	cin >> num;
	
	float total = 0, total_num = 0;
	
	for (int i = 0; i < num.size(); i++) {
		if (num[i] != '1') {
			total += to_digit(num[i]);
		} else {
			if (num[i+1] == '0') total += 10;
			else total += 1;
		}
		
		if (num[i] != '0') total_num++;
	}
	
	cout << fixed << setprecision(2) << total / total_num << endl;
	
	return 0;
}
