#include <string>
#include <iostream>

using namespace std;

int main() {

	string time;

	cin >> time;

	char letter = time[8];

	if (letter == 'A'){
		if (time.substr(0, 2) == "12") cout << "00" + time.substr(2, 6);
		else if (time.substr(0, 2) == "13") cout << "01" + time.substr(2, 6);
		else if (time.substr(0, 2) == "14") cout << "02" + time.substr(2, 6);
		else if (time.substr(0, 2) == "15") cout << "03" + time.substr(2, 6);
		else if (time.substr(0, 2) == "16") cout << "04" + time.substr(2, 6);
		else if (time.substr(0, 2) == "17") cout << "05" + time.substr(2, 6);
		else if (time.substr(0, 2) == "18") cout << "06" + time.substr(2, 6);
		else if (time.substr(0, 2) == "19") cout << "07" + time.substr(2, 6);
		else if (time.substr(0, 2) == "20") cout << "08" + time.substr(2, 6);
		else if (time.substr(0, 2) == "21") cout << "09" + time.substr(2, 6);
		else if (time.substr(0, 2) == "22") cout << "10" + time.substr(2, 6);
		else if (time.substr(0, 2) == "23") cout << "" + time.substr(2, 6);
		else cout << time.substr(0, 8);
	} else {
		if (time.substr(0, 2) == "00") cout << "24" + time.substr(2, 6);
		else if (time.substr(0, 2) == "01") cout << "13" + time.substr(2, 6);
		else if (time.substr(0, 2) == "02") cout << "14" + time.substr(2, 6);
		else if (time.substr(0, 2) == "03") cout << "15" + time.substr(2, 6);
		else if (time.substr(0, 2) == "04") cout << "16" + time.substr(2, 6);
		else if (time.substr(0, 2) == "05") cout << "17" + time.substr(2, 6);
		else if (time.substr(0, 2) == "06") cout << "18" + time.substr(2, 6);
		else if (time.substr(0, 2) == "07") cout << "19" + time.substr(2, 6);
		else if (time.substr(0, 2) == "08") cout << "20" + time.substr(2, 6);
		else if (time.substr(0, 2) == "09") cout << "21" + time.substr(2, 6);
		else if (time.substr(0, 2) == "10") cout << "22" + time.substr(2, 6);
		else if (time.substr(0, 2) == "11") cout << "23" + time.substr(2, 6);
		else cout << time.substr(0, 8);
	}

	return 0;
}