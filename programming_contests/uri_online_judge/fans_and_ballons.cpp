// https://www.urionlinejudge.com.br/judge/en/problems/view/1870

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	int rows, columns, position, temp;
	
	while (cin >> rows >> columns >> position && rows + columns + position != 0) {
		vector<int> v;
		vector< vector<int> > matrix;

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				cin >> temp;
				v.push_back(temp);
			}
			
			matrix.push_back(v);
			v.clear();
		}
		
		
	}
	
	return 0;
}
