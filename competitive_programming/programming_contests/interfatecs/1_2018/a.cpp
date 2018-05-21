// A

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
#include <algorithm>
#include <functional>
#include <utility>

using namespace std;

#define DEBUG

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

bool maior(const pair<int, int> &a, const pair<int, int> &b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second > b.second;
	}
}

int main(void) {
    ios::sync_with_stdio(false);
	
	int N;
	
	vector<int> quantidades(61, 0);
	vector< pair<int, int> > pares;
	vector<int> selecionados;
	
	cin >> N;

	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 6; j++) {
			int s;
			
			cin >> s;
			
			quantidades[s] += 1;
		}
	}
	
	for (int i = 1; i <= 60; i++) {
		pares.push_back(make_pair(i, quantidades[i]));
	}
	
	sort(pares.begin(), pares.end(), maior);
	
	for (int i = 0; i < 6; i++) {
		int n;
		
		cin >> n;
		
		selecionados.push_back(pares[n - 1].first);
		
	}
	
	cout << selecionados[0];
	for (int i = 1; i < 6; i++) {
		cout << " " << selecionados[i];
	}
	cout << endl;

	return EXIT_SUCCESS;
}



