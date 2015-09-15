#include <iostream>
#include <vector>

using namespace std;

vector<int> merge_sort(vector<int>& vec) {

  if (vec.size() == 1)
    return vec;

  vector<int>::iterator middle = vec.begin() + (vec.size() / 2);

  vector<int> left(vec.begin(), middle);
  vector<int> right(middle, vec.end());

  left = merge_sort(left);
  right = merge_sort(right);

  return merge(vec, left, right);
}

vector<int> merge(vector<int>& vec, const vector<int>& left, const vector<int>& right) {

  vector<int> result;
  unsigned left_it = 0, right_it = 0;

  while (left_it < left.size() && right_it < right.size()) {
    if (left[left_it] < right[right_it]) {
      result.push_back(left[left_it]);
      left_it++;
    } else {
      result.push_back(right[right_it]);
      right_it++;
    }
  }

  while (left_it < left.size()) {
    result.push_back(left[left_it]);
    left_it++;
  }

  while (right_it < right.size()) {
    result.push_back(right[right_it]);
    right_it++;
  }

  vec = result;
  return vec;
}

int main() {

   vector<int> v;

   v.push_back(2);
   v.push_back(3);
   v.push_back(6);
   v.push_back(4);
   v.push_back(5);
   v.push_back(8);
   v.push_back(7);
   v.push_back(1);

   merge_sort(v);

   for (int i = 0; i < v.size(); i++)
      cout << v[i] << " ";

   return 0;
}
