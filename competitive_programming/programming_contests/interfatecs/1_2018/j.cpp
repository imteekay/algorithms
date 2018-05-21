// J

#include <iostream>
#include <bitset>
#include <complex>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
#include <memory.h>
#include <algorithm>
#include <functional>
#include <utility>

using namespace std;

#ifdef DEBUG
	#define debug(args...) { cerr << #args << ": "; dbg,args; cerr << endl; }
	
	struct debugger
	{
		template<typename T> debugger& operator , (const T& v)
		{    
			cerr << v << " ";    
			return *this;    
		}
	} dbg;
#else
    #define debug(args...)
#endif

bool processado[101][101];
int mapa[101][101];
int L, C, Y, X, D;
int cont = 0;

void preenche(int y, int x) {
	if(!processado[y][x]) {
		processado[y][x] = true;
		cont++;
		
		if(x + 1 <= C && abs(mapa[Y][X] - mapa[y][x+1]) <= D) preenche(y, x+1);
		if(x - 1 >= 1 && abs(mapa[Y][X] - mapa[y][x-1]) <= D) preenche(y, x-1);
		if(y + 1 <= L && abs(mapa[Y][X] - mapa[y+1][x]) <= D) preenche(y+1, x);
		if(y - 1 >= 1 && abs(mapa[Y][X] - mapa[y-1][x]) <= D) preenche(y-1, x);
	}

}

int main(void) {
    ios::sync_with_stdio(false);
	
	memset(processado, false, sizeof processado);
	
	cin >> L >> C >> Y >> X >> D;
	
	for(int i = 1; i <= L; i++) {	
		for(int j = 1; j <= C; j++) {		
			cin >> mapa[i][j];		
		}			
	}
	
	preenche(Y, X);
	
	cout << cont << endl;
	

	return EXIT_SUCCESS;
}
