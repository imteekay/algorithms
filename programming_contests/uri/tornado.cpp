// https://www.urionlinejudge.com.br/judge/en/problems/view/1266

#include <iostream>
#include <string>

using namespace std;

int sumNumberOfNeededPosts(string tornado) {
  int neededPostsNumber = 0, sum = 0, n, numberOfBrokenPosts = 0;

  for (int i = 0; i < tornado.size(); i++) {
    n = tornado[i] - '0';
    sum += n;

    if (sum > 0) {
      if (numberOfBrokenPosts % 2 == 0) {
        neededPostsNumber += numberOfBrokenPosts / 2;
      } else {
        neededPostsNumber += (numberOfBrokenPosts-1) / 2;
      }

      numberOfBrokenPosts = 0;
      sum = 0;
    } else {
      numberOfBrokenPosts++;
    }
  }

  return neededPostsNumber;
}

int main() {
  int n;
  string tornado;
  char post;

  while (cin >> n && n != 0) {
    tornado = "";

    for (int i = 0; i < n; i++) {
      cin >> post;
      tornado += post;
    }

    if (tornado[0] == '0' && tornado[tornado.size()-1] == '0') {
      int index;

      for (int i = tornado.size()-1; i >= 0; i--) {
        if (tornado[i] == '1') {
          index = i;
          break;
        }
      }

      tornado += tornado;
      tornado = tornado.substr(index, tornado.size());
    }

    cout << sumNumberOfNeededPosts(tornado) << endl;
  }

  return 0;
}
