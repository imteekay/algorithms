// https://www.urionlinejudge.com.br/judge/en/problems/view/1870

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int get_left_fan(vector< vector<int> > &matrix, int row, int column) {
	while (true) {
		column--;
		if (matrix[row][column] != 0) return matrix[row][column];
	}
}

int get_right_fan(vector< vector<int> > &matrix, int row, int column) {
	while (true) {
		column++;
		if (matrix[row][column] != 0) return matrix[row][column];
	}
}

int is_it_safe_for_left(vector< vector<int> > &matrix, int row, int column, int walk_num) {
	for (int i = 1; i <= walk_num; i++) {
		if (matrix[row][column+i] != 0) return column+i;
	}
	
	return -1;
}

int is_it_safe_for_right(vector< vector<int> > &matrix, int row, int column, int walk_num) {
	for (int i = 1; i <= walk_num; i++) {
		if (matrix[row][column-i] != 0) return column-i;
	}
	return -1;
}

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
		
		int result_row = -1, result_column = -1;
		position--;
		
		for (int i = 0; i < rows; i++) {
			if (matrix[i][position] != 0) {
				result_column = position;
				result_row = i;
				break;
			}
			int left_fan = get_left_fan(matrix, i, position);
			int right_fan = get_right_fan(matrix, i, position);
				
			if (left_fan > right_fan) {
				result_column = is_it_safe_for_left(matrix, i, position, left_fan - right_fan);
				result_row = i;
				if (result_column != -1) break;
				else position += left_fan - right_fan;
			} else if (right_fan > left_fan) {
				result_column = is_it_safe_for_right(matrix, i, position, right_fan - left_fan);
				result_row = i;
				if (result_column != -1) break;
				else position -= right_fan - left_fan;
			}
		}
		
		if (result_column == -1) cout << "OUT " << position+1 << endl;
		else cout << "BOOM " << result_row+1 << " " << result_column+1 << endl;
	}
	
	return 0;
}
