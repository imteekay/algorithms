// https://www.urionlinejudge.com.br/judge/en/problems/view/1300

#include <iostream>

using namespace std;

int degree_to_minutes(int degree) {
  return 60 * degree / 360;
}

int main() {

  int n;

  while (cin >> n) {

  }

  return 0;
}

/*
  0 11 --> 11
  1 12 --> 11
  1 23 --> 22
  2 24 --> 22
  2 35 --> 33
  3 36 --> 33
  3 47 --> 44
  4 48 --> 44
  4 59 --> 55
  5 60 --> 55

  5 11 --> 6
  6 12 --> 6
  6 23 --> 17
  7 24 --> 17
  7 35 --> 28
  8 36 --> 28
  8 47 --> 39
  9 48 --> 39
  9 59 --> 50
  10 60 --> 50
*/
