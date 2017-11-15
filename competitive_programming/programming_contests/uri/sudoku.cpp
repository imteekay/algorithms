// https://www.urionlinejudge.com.br/judge/en/problems/view/1383

#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

bool correct_mini_matrix(vector< vector<int> > &sudoku, int x, int y) {
	int limit_x = x + 3, limit_y = y + 3;
	set<int> s;

	for (int i = x; i < limit_x; i++) {
		for (int j = y; j < limit_y; j++) {
			s.insert(sudoku[i][j]);
		}
	}

	int size = s.size();

	if (size == 9) return true;
	return false;
}

bool correct_horizontal_line(vector< vector<int> > &sudoku) {
	set<int> s;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			s.insert(sudoku[i][j]);
		}

		if (s.size() != 9) return false;
		s.clear();
	}

	return true;
}

bool correct_vertical_line(vector< vector<int> > &sudoku) {
	set<int> s;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			s.insert(sudoku[j][i]);
		}

		if (s.size() != 9) return false;
		s.clear();
	}

	return true;
}

int main() {
	int instance = 1;
	vector<int> v;
	vector< vector<int> > sudoku;
	int n, temp;

	cin >> n;

	while (n--) {
		bool correct_sudoku = true;		
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cin >> temp;
				v.push_back(temp);
			}

			sudoku.push_back(v);
			v.clear();
		}

		for (int i = 0; i < 9; i += 3) {
			for (int j = 0; j < 9; j += 3) {
				if (!correct_mini_matrix(sudoku, i, j)) {
					correct_sudoku = false;
					break;
				}
			}
		}

		cout << "Instancia " << instance << endl;

		if (correct_sudoku && correct_horizontal_line(sudoku) && correct_vertical_line(sudoku)) {
			cout << "SIM" << endl << endl;
		} else {
			cout << "NAO" << endl << endl;
		}

		sudoku.clear();
		instance++;
	}

	return 0;
}