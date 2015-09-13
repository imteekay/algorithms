// TEL8

#include <iostream>
#include <string>
using namespace std;

int main() {

	string number, result="";

	cin >> number;

	for(int i = 0; i < number.length(); i++)
		if (number[i] == 'A' || number[i] == 'B' || number[i] == 'C')
			result += "2";
		else if (number[i] == 'D' || number[i] == 'E' || number[i] == 'F')
			result += "3";
		else if (number[i] == 'G' || number[i] == 'H' || number[i] == 'I')
			result += "4";
		else if (number[i] == 'J' || number[i] == 'K' || number[i] == 'L')
			result += "5";
		else if (number[i] == 'M' || number[i] == 'N' || number[i] == 'O')
			result += "6";
		else if (number[i] == 'P' || number[i] == 'Q' || number[i] == 'R' || number[i] == 'S')
			result += "7";
		else if (number[i] == 'T' || number[i] == 'U' || number[i] == 'V')
			result += "8";
		else if (number[i] == 'W' || number[i] == 'X' || number[i] == 'Y' || number[i] == 'Z')
			result += "9";
		else
			result += number[i];

		cout << result;

	return 0;
}
