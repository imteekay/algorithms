#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// passing vector as reference
void desc_sort(vector<int> &v) {
  sort(v.begin(), v.end(), greater<int>());
}

// passing vector as pointer
void desc_sort(vector<int> *v) {
  sort(v->begin(), v->end(), greater<int>());
}

int main() {

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(10);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

	string arr[] = { "bla", "ble", "bli" };
	vector<string> v3(arr, arr + sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << endl;

	int ar[] = { 1, 2, 3, 4, 5 };
	vector<int> v2(ar, ar + sizeof(ar) / sizeof(ar[0]));

	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << endl;

  cout << v.size() << endl;

  // remove last element
  v.pop_back();

  // remove first element
  v.erase(v.begin());

  // remove first element
  v.erase(v.begin()+1);

  // remove the last element using erase
  v.erase(v.begin() + v.size() - 1);

  for (int i = 0; i < v.size(); i++)
    cout << v[i] << endl;

  cout << v.size() << endl;

  // making a pair of integers in the vector
  vector< pair<int, int> > pairs;
  pairs.push_back(make_pair(4, 1));
  pairs.push_back(make_pair(3, 1));
  pairs.push_back(make_pair(2, 1));
  pairs.push_back(make_pair(5, 1));
  pairs.push_back(make_pair(7, 1));
  pairs.push_back(make_pair(2, 1));

  pairs[0].first = 0;
  pairs.back().second++;

  // sort vector of pairs based on the first element
  sort(pairs.begin(), pairs.end());

  for (int i = 0; i < pairs.size(); i++)
  	cout << pairs[i].first << " " << pairs[i].second << endl;

  // sort from end to begin of the vector
  vector<int> vetor;
  vetor.push_back(1);
  vetor.push_back(2);
  vetor.push_back(3);
  vetor.push_back(4);
  vetor.push_back(10);

  desc_sort(vetor);

  for (int i = 0; i < vetor.size(); i++)
    cout << vetor[i] << endl;

  vector<int> vetorzin;
  vetorzin.push_back(1);
  vetorzin.push_back(2);
  vetorzin.push_back(3);
  vetorzin.push_back(4);
  vetorzin.push_back(10);

  desc_sort(&vetorzin);

  int removing = 0;

  vetorzin.erase(vetorzin.begin() + 1);
  removing++;
  vetorzin.erase(vetorzin.begin() + 2 - removing);

  for (int i = 0; i < vetorzin.size(); i++)
    cout << vetorzin[i] << endl;

  // implement reverse
  reverse(vetorzin.begin(), vetorzin.end());

  // matrix
  vector< vector<int> > matrix;
  vector<int> v;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      v.push_back(i);
    }

    matrix.push_back(v);
    v.clear()
  }

  // iterators
  vector<int> vec;
  vec.push_back(100);
  vec.push_back(99);

  vec.begin();
  vec.end();

  // capacity
  vec.size();
  vec.empty();

  // element access
  cout << vec[0] << endl;
  cout << vec[1] << endl;
  cout << vec.at(0) << endl;
  cout << vec.front() << endl;
  cout << vec.back() << endl;

	return 0;
}
