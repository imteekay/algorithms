#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int time, temp, n;
	vector<int> v;

	cin >> time;

	while (time--) {
		cin >> temp;
		v.push_back(temp);
	}

	int bla, begin, end;
	cin >> bla >> begin >> end;	

	cout << end - begin + 1 << endl;

	v.erase(v.begin() + begin - 1, v.begin() + end);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	return 0;
}