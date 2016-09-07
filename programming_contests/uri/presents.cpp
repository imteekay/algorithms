// https://www.urionlinejudge.com.br/judge/en/problems/view/2022

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

struct product {
	string name;
	int preference;
	float price;
};

bool compareProducts(const product &p1, const product &p2) {
	if (p1.preference > p2.preference) return true;
	else if (p1.preference == p2.preference) {
		if (p1.price < p2.price) return true;
		else if (p1.price == p2.price) return p1.name < p2.name;
	}

	return false;
}

int main() {
	string name, productName;
	int n, preference;
	float price;

	while (cin >> name) {
		cin >> n;
		vector<product> products;

		for (int i = 0; i < n; i++) {
			cin.ignore();
			getline(cin, productName);
			cin >> price >> preference;
			product p;
			p.name = productName;
			p.preference = preference;
			p.price = price;
			products.push_back(p);
		}

		sort(products.begin(), products.end(), compareProducts);

		cout << "Lista de " << name << endl;

		for (int i = 0; i < n; i++) {
			cout << products[i].name << " - R$";
			cout << fixed << setprecision(2) << products[i].price << endl;
		}

		cout << endl;
	}

	return 0;
}