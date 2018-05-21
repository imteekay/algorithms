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
	
	int sum = 0;
	
	for (int i = 0; i < 3; i++) {
		int T, Q;
		
		cin >> T >> Q;
		
		sum += T / Q;
	}
	
	cout << sum << endl;

	return EXIT_SUCCESS;
}
