// https://www.urionlinejudge.com.br/judge/en/problems/view/1367

#include <iostream>
#include <string>

using namespace std;

bool problem_incorrected(string problems, char problem) {
	if (problems.find(problem) != -1) return true;
	return false;
}

bool problem_solved(string problems, char problem) {
	if (problems.find(problem) != -1) return true;
	return false;
}

int incorrect_submission_counter(string problems, char problem) {
	int counter = 0;
	for (int i = 0; i < problems.size(); i++) if (problems[i] == problem) counter++;
	return counter;
}

int main() {
	
	int n;
	cin >> n;
	string solved_problems = "";
	string incorrect_problems = "";

	while (n != 0) {
		int total_points = 0;
		char problem;
		int point;
		string status;

		for (int i = 0; i < n; i++) {			
			cin >> problem >> point >> status;
			if (status == "correct") {
				if (!problem_solved(solved_problems, problem)) {
					if (problem_incorrected(incorrect_problems, problem)) total_points += point + 20 * incorrect_submission_counter(incorrect_problems, problem);
					else total_points += point;
					solved_problems += problem;
				}
			} else {
				incorrect_problems += problem;
			}
		}		

		cout << solved_problems.size() << " " << total_points << endl;
		solved_problems.clear();
		incorrect_problems.clear();
		cin >> n;
	}

	return 0;
}