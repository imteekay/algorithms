#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int ga=0, gb=0, va=0, vb=0, gaw=0, gbw=0;
		int a, b;
		scanf("%d x %d", &a, &b);
		if(a>b) va++;
		if(b>a) vb++;
		ga += a;
		gb += b;
		gbw = b;
		scanf("%d x %d", &b, &a);
		if(a>b) va++;
		if(b>a) vb++;
		ga += a;
		gb += b;
		gaw = a;
		if(va > vb) cout<<"Time 1\n";
		else if(vb > va) cout<<"Time 2\n";
		else if(ga > gb) cout<<"Time 1\n";
		else if(gb > ga) cout<<"Time 2\n";
		else if(gaw > gbw) cout<<"Time 1\n";
		else if(gbw > gaw) cout<<"Time 2\n";
		else cout<<"Penaltis\n";
	}
	return 0;
}
