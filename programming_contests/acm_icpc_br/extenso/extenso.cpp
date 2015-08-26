#include <string>
#include <iostream>
#include <vector>

using namespace std;

void split(string &n1, string &n2, string number) {
	int dot_index = number.find(".");
	n1 = number.substr(0, dot_index);
	n2 = number.substr(dot_index+1, number.size()-1);
}

string transformNumberToCents(string cents) {
	string result="";
	string ar[] = { "DEZ", "ONZE", "DOZE", "TREZE", "QUATORZE", "QUINZE", "DEZESSEIS", "DEZESSETE", "DEZOITO", "DEZENOVE" };
	string um_a_nove[] = { "UM", "DOIS", "TRES", "QUATRO", "CINCO", "SEIS", "SETE", "OITO", "NOVE" };
	vector<string> values(ar, ar + sizeof(ar) / sizeof(ar[0]));
	vector<string> sec_values(um_a_nove, um_a_nove + sizeof(um_a_nove) / sizeof(um_a_nove[0]));

	if (cents[0] == '0') result += sec_values[cents[1]-1];
	else if (cents[0] == '1') result += values[cents[1]];
	else if (cents[0] == '2') result += "VINTE E " + sec_values[cents[1]-1];
	else if (cents[0] == '3') result += "TRINTA E " + sec_values[cents[1]-1];
	else if (cents[0] == '4') result += "QUARENTA E " + sec_values[cents[1]-1];
	else if (cents[0] == '5') result += "CINQUENTA E " + sec_values[cents[1]-1];
	else if (cents[0] == '6') result += "SESSENTA E " + sec_values[cents[1]-1];
	else if (cents[0] == '7') result += "SETENTA E " + sec_values[cents[1]-1];
	else if (cents[0] == '8') result += "OITENTA E " + sec_values[cents[1]-1];
	else if (cents[0] == '9') result += "NOVENTA E " + sec_values[cents[1]-1];

	return result;
}

string transformNumberToReal(string reais) {

}

int main() {

	string number;
	cin >> number;	

	while(number != "0.00") {		
		string n1, n2, result="";		

		split(n1, n2, number);

		n1 = transformNumberToReal(n1);
		n2 = transformNumberToCents(n2);

		if (n1 == '0') {
			if (n2 == "01")
				result += n2 + " CENTAVO";
			else
				result += n2 + " CENTAVOS";
		} else if (n1 == '1') {
			if (n2 == "00")
				result += n1 + " REAL";
			else if (n2 == "01")
				result += n1 + " REAL E " + n2 + " CENTAVO";
			else
				result += n1 + " REAL E " + n2 + " CENTAVOS";
		} else {
			if (n2 == "00")
				result += n1 + " REAIS";
			else if (n2 == "01")
				result += n1 + " REAIS E " + n2 + " CENTAVO";
			else
				result += n1 + " REAIS E " + n2 + " CENTAVOS";
		}

		cout << result;
		cin >> number;
	}

	return 0;
}