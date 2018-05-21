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
#include <memory.h>
#include <map>
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

int A;
double R = 0.0;

double saldo[32], resgate[32];

int main(void) {
    ios::sync_with_stdio(false);
	
	for(int i = 1; i <= 31; i++) {
	
		saldo[i] = 0.0;	
		resgate[i] = 0.0;
	
	}
	
	cin >> A >> R;
		
	int temp;
	while(cin >> temp) {
		cin >> saldo[temp];
	}
	
	double valor_restante = R;
	
	double cont = 0.0;
	for(int dia = 1; dia <= 31; dia++) cont += saldo[dia];
	
	if(cont < R) {
		printf("INSUFICIENTE\n");
		return 0;
	}
	
	
	for(int dia = A; valor_restante >= 0.0 && dia >= 1; dia--) {
		if(saldo[dia] <= valor_restante) {
			resgate[dia] = saldo[dia];
			valor_restante -= resgate[dia];
		} else {
			resgate[dia] = valor_restante;
			valor_restante = 0.0;
		}
	}
	
	
	for(int dia = 31; valor_restante >= 0.0 && dia > A; dia--) {
		if(saldo[dia] <= valor_restante) {
			resgate[dia] = saldo[dia];
			valor_restante -= resgate[dia];
		} else {
			resgate[dia] = valor_restante;
			valor_restante = 0.0;
		}
	}
	
	for(int dia = 1; dia <= 31; dia++) {
		if(resgate[dia] > 0.0) printf("%d %.2f (resgate de %.2f)\n", dia, saldo[dia] - resgate[dia], resgate[dia]);
	}

	return EXIT_SUCCESS;
}
