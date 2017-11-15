#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int main() {

	int votos, i, num, maior, contagem, candidato;
	map<int, int> mapa;
	map<int,int>::iterator it;

	while(scanf("%d", &num) != EOF) {
	  mapa.erase ( mapa.begin(), mapa.end());
	  maior = candidato = -1;
	  contagem = 0;
	
		for (i = 0; i < num; i++){
			scanf("%d", &votos);
			if (mapa.find(votos) == mapa.end()) mapa[votos] = 1;
			else mapa[votos]++;
		}

		for ( it=mapa.begin(); it != mapa.end(); it++ ){
			if ((*it).second > maior) {
				maior = (*it).second;
				candidato = (*it).first;
			}
		}
		
		cout << "\n" << candidato << "\n";
	}
	
	return 0;
}