// SPOJ Problem Set (seletivas) - SUDOIME

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string correct_sudoku(vector< vector<int> > matrix) {

	vector<int> vetorzin_1;
	vector<int> vetorzin_2;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			vetorzin_1.push_back(matrix[i][j]);
			vetorzin_2.push_back(matrix[j][i]);
		}

		sort(vetorzin_1.begin(), vetorzin_1.end());
		sort(vetorzin_2.begin(), vetorzin_2.end());

		for (int j = 0; j < 9; j++) {
			if ((vetorzin_1[j] != j+1) || (vetorzin_2[j] != j+1))
				return "NAO";
		}

		vetorzin_1.clear();
		vetorzin_2.clear();
	}

}

int main() {

	int n, counter=1, temp;
	string result="SIM";
	vector<int> vetor;
	vector< vector<int> > matrix;
	
	cin >> n;
	
	while(n--) {
	
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cin >> temp;				
				vetor.push_back(temp);
			}
			matrix.push_back(vetor);
			vetor.clear();
		}

		result = correct_sudoku(matrix);
		
		cout << "Instancia " << counter << endl;
		cout << result << endl;
		result="SIM";
		matrix.clear();
		counter++;
	}

	return 0;
}