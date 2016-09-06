// https://www.urionlinejudge.com.br/judge/en/problems/view/1121

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isInsideGrid(int x, int y, int lines, int columns) {
	if (x < 0 || y < 0 || x >= columns || y >= lines) return false;
	return true;
}

int main() {
	int lines, columns, instructionsNumber, x, y;
	string instructions;
	char orientation;

	while (cin >> lines >> columns >> instructionsNumber && lines + columns + instructionsNumber != 0) {
		vector<string> grid;
		string line;
		cin.ignore();

		for (int i = 0; i < lines; i++) {
			getline(cin, line);
			grid.push_back(line);
		}		
				
		getline(cin, instructions);

		for (int i = 0; i < lines; i++) {
			for (int j = 0; j < columns; j++) {
				if (grid[i][j] == 'N') {
					orientation = 'N';
					x = j;
					y = i;
				} else if (grid[i][j] == 'S') {
					orientation = 'S';
					x = j;
					y = i;
				} else if (grid[i][j] == 'L') {
					orientation = 'L';
					x = j;
					y = i;
				} else if (grid[i][j] == 'O') {
					orientation = 'O';
					x = j;
					y = i;
				}
			}
		}

		int figuresNumber = 0;
		grid[y][x] = '.';

		for (int i = 0; i < instructions.size(); i++) {
			if (orientation == 'N') {
				if (instructions[i] == 'D') orientation = 'L';
				else if (instructions[i] == 'E') orientation = 'O';
				else {
					if (isInsideGrid(x, y-1, lines, columns)) {
						if (grid[y-1][x] == '.') y--;
						else if (grid[y-1][x] == '*') {
							grid[y-1][x] = '.';
							y--;
							figuresNumber++;
						}
					}
				}
			} else if (orientation == 'S') {
				if (instructions[i] == 'D') orientation = 'O';
				else if (instructions[i] == 'E') orientation = 'L';
				else {
					if (isInsideGrid(x, y+1, lines, columns)) {
						if (grid[y+1][x] == '.') y++;
						else if (grid[y+1][x] == '*') {
							grid[y+1][x] = '.';
							y++;
							figuresNumber++;
						}
					}
				}
			} else if (orientation == 'L') {
				if (instructions[i] == 'D') orientation = 'S';
				else if (instructions[i] == 'E') orientation = 'N';
				else {
					if (isInsideGrid(x+1, y, lines, columns)) {
						if (grid[y][x+1] == '.') x++;
						else if (grid[y][x+1] == '*') {
							grid[y][x+1] = '.';
							x++;
							figuresNumber++;
						}
					}
				}
			} else {
				if (instructions[i] == 'D') orientation = 'N';
				else if (instructions[i] == 'E') orientation = 'S';
				else {
					if (isInsideGrid(x-1, y, lines, columns)) {
						if (grid[y][x-1] == '.') x--;
						else if (grid[y][x-1] == '*') {
							grid[y][x-1] = '.';
							x--;
							figuresNumber++;
						}
					}
				}
			}			
		}

		cout << figuresNumber << endl;
	}

	return 0;
}