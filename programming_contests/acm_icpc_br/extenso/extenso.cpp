#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// stringstream ss;
// string num1;
// ss << n1[0];
// ss >> num1;

void split(string &n1, string &n2, string number) {
	int dot_index = number.find(".");
	n1 = number.substr(0, dot_index);
	n2 = number.substr(dot_index+1, number.size()-1);
}

string transformNumberToCents(string cents) {
	string result="";
	string ar[] = { "DEZ", "ONZE", "DOZE", "TREZE", "QUATORZE", "QUINZE", "DEZESSEIS", "DEZESSETE", "DEZOITO", "DEZENOVE" };
	string um_a_nove[] = { "UM", "DOIS", "TRES", "QUATRO", "CINCO", "SEIS", "SETE", "OITO", "NOVE" };
	vector<string> values(ar, ar + sizeof(ar)/sizeof(ar[0]));
	vector<string> sec_values(um_a_nove, um_a_nove + sizeof(um_a_nove)/sizeof(um_a_nove[0]));

	stringstream ss;
	string num1;
	ss << cents[0];
	ss >> num1;
	int cent_unit = stoi(num1);

	if 			(cents[0] == '0') result += sec_values[cent_unit-1];
	else if (cents[0] == '1') result += values[cent_unit];
	else if (cents[0] == '2') result += "VINTE E "     + sec_values[cent_unit-1];
	else if (cents[0] == '3') result += "TRINTA E "    + sec_values[cent_unit-1];
	else if (cents[0] == '4') result += "QUARENTA E "  + sec_values[cent_unit-1];
	else if (cents[0] == '5') result += "CINQUENTA E " + sec_values[cent_unit-1];
	else if (cents[0] == '6') result += "SESSENTA E "  + sec_values[cent_unit-1];
	else if (cents[0] == '7') result += "SETENTA E "   + sec_values[cent_unit-1];
	else if (cents[0] == '8') result += "OITENTA E "   + sec_values[cent_unit-1];
	else if (cents[0] == '9') result += "NOVENTA E "   + sec_values[cent_unit-1];

	return result;
}

string transformNumberToReal(string reais) {
	string result="";

	string um_a_nove[] = { "UM", "DOIS", "TRES", "QUATRO", "CINCO", "SEIS", "SETE", "OITO", "NOVE" };
	vector<string> sec_values(um_a_nove, um_a_nove + sizeof(um_a_nove)/sizeof(um_a_nove[0]));

	string ar[] = { "DEZ", "ONZE", "DOZE", "TREZE", "QUATORZE", "QUINZE", "DEZESSEIS", "DEZESSETE", "DEZOITO", "DEZENOVE" };
	vector<string> values(ar, ar + sizeof(ar)/sizeof(ar[0]));

	string dez_a_noventa[] = { "VINTE", "TRINTA", "QUARENTA", "CINQUENTA", "SESSENTA", "SETENTA", "OITENTA", "NOVENTA" };
	vector<string> dicker(dez_a_noventa, dez_a_noventa + sizeof(dez_a_noventa)/sizeof(dez_a_noventa[0]));

	string cem_a_novecentos[] = { "CENTO", "DUZENTOS", "TREZENTOS", "QUATROCENTOS", "QUINHENTOS", "SEICENTOS", "SETECENTOS", "OITOCENTOS", "NOVECENTOS" };
	vector<string> hundred(cem_a_novecentos, cem_a_novecentos + sizeof(cem_a_novecentos)/sizeof(cem_a_novecentos[0]));

	if (reais.size() == 1) {
		result += sec_values[stoi(reais)-1];
	}	else if (reais.size() == 2) {
		stringstream ss; string n1, n2;
		ss << reais[0]; ss >> n1;
		ss << reais[1]; ss >> n2;
		if (reais[0] == '1') {
			result += values[stoi(n2)];
		}	else {
			result += dicker[stoi(n1)-1] + " E " + sec_values[stoi(n2)-1];
		}
	} else if (reais.size() == 3) {
		stringstream ss; string n1, n2, n3;
		ss << reais[0]; ss >> n1;
		ss << reais[1]; ss >> n2;
		ss << reais[2]; ss >> n3;
		result += hundred[stoi(n1)-1] + " E " + dicker[stoi(n2)-1] + " E " + sec_values[stoi(n3)-1];
	}	else if (reais.size() == 4){
		stringstream ss; string n1, n2, n3, n4;
		ss << reais[0]; ss >> n1;
		ss << reais[1]; ss >> n2;
		ss << reais[2]; ss >> n3;
		ss << reais[3]; ss >> n4;
		result += sec_values[stoi(n1)-1] + " MIL E " + hundred[stoi(n2)-1] + " E " + dicker[stoi(n3)-1] + " E " + sec_values[stoi(n4)-1];
	}	else if (reais.size() == 5) {
		stringstream ss; string n1, n2, n3, n4, n5;
		ss << reais[0]; ss >> n1;
		ss << reais[1]; ss >> n2;
		ss << reais[2]; ss >> n3;
		ss << reais[3]; ss >> n4;
		ss << reais[4]; ss >> n5;
		if (reais[0] == '1') {
			result += values[stoi(n2)] + " MIL E " + hundred[stoi(n3)-1] + " E " + dicker[stoi(n4)-1] + " E " + sec_values[stoi(n5)-1];
		}	else {
			result += dicker[stoi(n1)-1] + " E " + sec_values[stoi(n2)-1]; + " MIL E " + hundred[stoi(n3)-1] + " E " + dicker[stoi(n4)-1] + " E " + sec_values[stoi(n5)-1];
		}
	}	else if (reais.size() == 6) {
		stringstream ss; string n1, n2, n3, n4, n5, n6;
		ss << reais[0]; ss >> n1;
		ss << reais[1]; ss >> n2;
		ss << reais[2]; ss >> n3;
		ss << reais[3]; ss >> n4;
		ss << reais[4]; ss >> n5;
		ss << reais[5]; ss >> n6;
		result += hundred[stoi(n1)-1] + " E " + dicker[stoi(n2)-1] + " E " + sec_values[stoi(n3)-1] + " MIL E" + hundred[stoi(n4)-1] + " E " + dicker[stoi(n5)-1] + " E " + sec_values[stoi(n6)-1];
	}	else {
		result += "UM MILHAO";
	}

	return result;
}

int main() {

	string number;
	cin >> number;

	while(number != "0.00") {
		string n1, n2, result="";

		split(n1, n2, number);

		n1 = transformNumberToReal(n1);
		n2 = transformNumberToCents(n2);

		if (n1 == "0") {
			if (n2 == "01")
				result += n2 + " CENTAVO";
			else
				result += n2 + " CENTAVOS";
		} else if (n1 == "1") {
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
