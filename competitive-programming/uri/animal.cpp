// https://www.urionlinejudge.com.br/judge/en/problems/view/1049

#include <iostream>
#include <string>

using namespace std;

int main() {

	string s1, s2, s3;

	cin >> s1 >> s2 >> s3;

	if (s1 == "vertebrado") {
		if (s2 == "ave") {
			if (s3 == "carnivoro") {
				cout << "aguia" << endl;
			} else {
				cout << "pomba" << endl;
			}
		} else {
			if (s3 == "onivoro") {
				cout << "homem" << endl;
			} else {
				cout << "vaca" << endl;
			}
		}
	} else {
		if (s2 == "inseto") {
			if (s3 == "hematofago") {
				cout << "pulga" << endl;
			} else {
				cout << "lagarta" << endl;
			}
		} else {
			if (s3 == "hematofago") {
				cout << "sanguessuga" << endl;
			} else {
				cout << "minhoca" << endl;
			}
		}		
	}

	return 0;
}