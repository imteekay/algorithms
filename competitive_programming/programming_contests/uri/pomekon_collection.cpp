// https://www.urionlinejudge.com.br/judge/en/problems/view/2174

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	int n;
	string pokemonName;
	set<string> pokemons;

	cin >> n;

	while (n--) {
		cin >> pokemonName;
		pokemons.insert(pokemonName);
	}

	cout << "Falta(m) " << 151 - pokemons.size() << " pomekon(s)." << endl;

	return 0;
}