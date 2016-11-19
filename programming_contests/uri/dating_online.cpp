#include <iostream>
#include <cmath>
#include <cstdio>

#include <vector>
#include <algorithm>

#define FOR(i, a) for(int i = 0; i < a; i++)
#define POW(a) ((a) * (a))

using namespace std;

int N;
int v[100001];

int main() {

	while(scanf("%d", &N) != EOF) {
		FOR(i, N) scanf("%d", &v[i]);
		sort(v, v+N);

		double sin_ang = sin(2 * M_PI / N);
		double area = 0.0;
		double lado1 = v[N-1], lado_temp = v[N-2];

		area += lado1 * lado_temp * sin_ang / 2;

		for (int i = N - 3; i >= 0; i--) {
			area += v[i] * v[i+2] * sin_ang / 2;
		}

		area += v[0] * v[1] * sin_ang / 2;
		printf("%.3lf\n", area);
	}

	return 0;
}

