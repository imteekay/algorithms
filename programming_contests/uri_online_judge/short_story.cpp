// https://www.urionlinejudge.com.br/judge/en/problems/view/1222

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	int num_words, max_char_per_line, max_line_per_page, counter_char = 0, counter_lines = 0, counter_pages = 0;
	string word;
	vector<string> words;

	while (cin >> num_words >> max_line_per_page >> max_char_per_line) {
		for (int i = 0; i < num_words; i++) {
			cin >> word;
			words.push_back(word);
		}

		for (int i = 0; i < num_words; i++) {
			counter_char += words[i].size();

			if (i+1 < num_words && counter_char < max_char_per_line) counter_char++;		
			
			if (counter_char > max_char_per_line) {
				counter_lines++;
				counter_char = 0;
				i--;
			} else if (counter_char == max_char_per_line) {
				counter_lines++;
				counter_char = 0;
			}

			if (counter_lines >= max_line_per_page) {
				counter_pages++;
				counter_lines = 0;
			}
		}

		counter_pages++;

		cout << counter_pages << endl;

		counter_char = 0;
		counter_lines = 0;
		counter_pages = 0;
		words.clear();
	}

	return 0;
}