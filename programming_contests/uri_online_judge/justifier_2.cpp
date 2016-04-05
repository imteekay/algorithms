// https://www.urionlinejudge.com.br/judge/en/problems/view/1273

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int get_greater_size(vector<string> &v) {
  int max = 0;
  for (int i = 0; i < v.size(); i++) if (v[i].size() > max) max = v[i].size();
  return max;
}

string concatenate_spaces(int n) {
  string spaces = "";
  while (n--) spaces += " ";
  return spaces;
}

string remove_first_spaces(string phrase) {
	string phrase_without_first_spaces = "";
	bool can_assign = false;
	for (int i = 0; i < phrase.size(); i++) {
		if (phrase[i] != ' ') can_assign = true;
		if (can_assign) phrase_without_first_spaces += phrase[i];
	}
	
	return phrase_without_first_spaces;
}

string remove_spaces(string phrase) {
	string phrase_without_spaces = "";
	bool can_assign = false;
	for (int i = 0; i < phrase.size(); i++) {
		if (phrase[i] != ' ') {
			if (can_assign) phrase_without_spaces += " ";
			phrase_without_spaces += phrase[i];
		}
		
		if (phrase[i] == ' ') can_assign = true;
		else can_assign = false;
	}
	
	return phrase_without_spaces;
}

int main() {

  int n;
  cin >> n;
  string s, spaces;

  while (n != 0) {
    vector<string> v;
	  int counter = 1;
	  cin.ignore();
	
    while (counter <= n) {
      getline(cin, s);
      s = remove_first_spaces(s);
      s = remove_spaces(s);
      v.push_back(s);
      counter++;
    }

    int greater_size = get_greater_size(v);

    for (int i = 0; i < v.size(); i++) {
      spaces = concatenate_spaces(greater_size - v[i].size());
      v[i].insert(0, spaces);
      cout << v[i] << endl;
    }

    cin >> n;
    if (n) cout << endl;
  }

  return 0;
}
