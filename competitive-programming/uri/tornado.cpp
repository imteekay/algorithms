// https://www.urionlinejudge.com.br/judge/en/problems/view/1266

#include <iostream>

using namespace std;

int main() {
  int n;
  char post;

  while (cin >> n && n != 0) {
    int neededPostsNumber = 0, sum = 0, x, numberOfBrokenPosts = 0, firstZeros = 0;
    bool finishedFirstZerosLot = false;

    for (int i = 0; i < n; i++) {
      cin >> post;
      if (i == 0 && post == '1') finishedFirstZerosLot = true;

      x = post - '0';
      sum += x;

      if (sum > 0) {
        if (numberOfBrokenPosts % 2 == 0) neededPostsNumber += numberOfBrokenPosts / 2;
        else neededPostsNumber += (numberOfBrokenPosts-1) / 2;
        numberOfBrokenPosts = 0;
        sum = 0;
        finishedFirstZerosLot = true;
      } else {
        numberOfBrokenPosts++;
        if (!finishedFirstZerosLot) firstZeros++;
      }
    }

    if (numberOfBrokenPosts % 2 == 0) neededPostsNumber += numberOfBrokenPosts / 2;
    else neededPostsNumber += (numberOfBrokenPosts-1) / 2;
    if (firstZeros + numberOfBrokenPosts != 0 && (firstZeros + numberOfBrokenPosts) % 2 == 0) neededPostsNumber++;
    cout << neededPostsNumber << endl;
  }

  return 0;
}
