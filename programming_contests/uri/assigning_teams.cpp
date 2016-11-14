// https://www.urionlinejudge.com.br/judge/pt/problems/view/2345

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	vector<int> v;

	for (int i = 0; i < 4; i++)	{
		cin >> n;
		v.push_back(n);		
	}

	sort(v.begin(), v.end());

	int diff1, diff2;
	diff1 = v[3] + v[0];
	diff2 = v[2] + v[1];

	if (diff1 > diff2) cout << diff1 - diff2 << endl;
	else cout << diff2 - diff1 << endl;

	return 0;
}