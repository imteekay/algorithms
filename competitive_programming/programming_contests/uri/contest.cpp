// https://www.urionlinejudge.com.br/judge/en/problems/view/1514

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int n1, n2, x;
	cin >> n1 >> n2;	

	while (n1 + n2 != 0) {
		vector< vector<int> > matrix;
		vector<int> v;
		int num_problems = 0, solved;
		bool nobody_solved_all_problems = true;
		bool solved_by_one_person = true;
		bool no_problem_solved_by_everyone = true;
		bool solved_one_problem = true;

		for (int i = 0; i < n1; i++) {
			for (int j = 0; j < n2; j++) {
				cin >> x;
				v.push_back(x);
			}

			matrix.push_back(v);
			v.clear();
		}

		for (int i = 0; i < n1; i++) {
			solved = 0;
			for (int j = 0; j < n2; j++) if (matrix[i][j] == 1) solved++;
			if (solved == n2) nobody_solved_all_problems = false;
			if (solved == 0) solved_one_problem = false;
		}

		for (int i = 0; i < n2; i++) {
			solved = 0;
			for (int j = 0; j < n1; j++) if (matrix[j][i] == 1) solved++;
			if (solved == n1) no_problem_solved_by_everyone = false;
			if (solved == 0) solved_by_one_person = false;
		}

		if (nobody_solved_all_problems) num_problems++;
		if (solved_by_one_person) num_problems++;
		if (no_problem_solved_by_everyone) num_problems++;
		if (solved_one_problem) num_problems++;

		cout << num_problems << endl;

		cin >> n1 >> n2;
	}

	return 0;
}