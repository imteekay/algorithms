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
	
	string line;
	
	char c = '\n';
	int qc = 0,
		ic, jc;
	
	char d = '\n';
	int qd = 0,
		id, jd;
	
	int z = 0;
	while (getline(cin, line)) {
		for (int i = 0; i < line.length(); i++) {
			if (c == '\n') {
				c = line[i];
			}
			else if (c != line[i] && d == '\n') {
				d = line[i];
			}
			
			if (line[i] == c) {
				qc += 1;
				ic = z + 1;
				jc = i + 1;
			}
			else {
				qd += 1;
				id = z + 1;
				jd = i + 1;
			}
		}
		
		z += 1;
	}
	
	
	if (qc < qd) {
		cout << "LINHA " << ic << " COLUNA " << jc << endl;
    }
	else {
		cout << "LINHA " << id << " COLUNA " << jd << endl;
	}


	return EXIT_SUCCESS;
}
