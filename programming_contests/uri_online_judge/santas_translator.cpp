// https://www.urionlinejudge.com.br/judge/en/problems/view/1763

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	
	map<string,string> Dictionary;

	Dictionary["brasil"] = "Feliz Natal!";
	Dictionary["alemanha"] = "Frohliche Weihnachten!";
	Dictionary["austria"] = "Frohe Weihnacht!";
	Dictionary["coreia"] = "Chuk Sung Tan!";
	Dictionary["espanha"] = "Feliz Navidad!";
	Dictionary["grecia"] = "Kala Christougena!";
	Dictionary["estados-unidos"] = "Merry Christmas!";
	Dictionary["inglaterra"] = "Merry Christmas!";
	Dictionary["australia"] = "Merry Christmas!";
	Dictionary["portugal"] = "Feliz Natal!";
	Dictionary["suecia"] = "God Jul!";
	Dictionary["turquia"] = "Mutlu Noeller";
	Dictionary["argentina"] = "Feliz Navidad!";
	Dictionary["chile"] = "Feliz Navidad!";
	Dictionary["mexico"] = "Feliz Navidad!";
	Dictionary["antardida"] = "Merry Christmas!";
	Dictionary["canada"] = "Merry Christmas!";
	Dictionary["irlanda"] = "Nollaig Shona Dhuit!";
	Dictionary["belgica"] = "Zalig Kerstfeest!";
	Dictionary["italia"] = "Buon Natale!";
	Dictionary["libia"] = "Buon Natale!";
	Dictionary["siria"] = "Milad Mubarak!";
	Dictionary["marrocos"] = "Milad Mubarak!";
	Dictionary["japao"] = "Merii Kurisumasu!";

	string country, result;
	bool found = false;

	while (cin >> country) {
		if (Dictionary.find(country) ==  Dictionary.end()) cout << "--- NOT FOUND ---" << endl;      
    else cout << Dictionary[country] << endl;
	}

	return 0;
}