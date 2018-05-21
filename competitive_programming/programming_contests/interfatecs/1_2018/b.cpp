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

int main(void) {
    ios::sync_with_stdio(false);
	
	char C;
	int N;
	
	int TA = 0,
		TV = 0;
	
	cin >> C >> ws >> N;
	
	
	
	for (int i = 0; i < N; i++) {
		int n;
		
		cin >> n;
		
		if (C == 'V') {
			TV += n;
			C = 'A';
		}
		else {
			TA += n;
			C = 'V';
		}
	}

	cout << "VOCE: " << TV << " AMIGO: " << TA << endl;
	
	return EXIT_SUCCESS;
}
