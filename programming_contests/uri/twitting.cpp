// https://www.urionlinejudge.com.br/judge/en/problems/view/2165

#include <iostream>
#include <string>

using namespace std;

int main() {
  string tweet;
  getline(cin, tweet);
  if (tweet.size() <= 140) cout << "TWEET" << endl;
  else cout << "MUTE" << endl;

  return 0;
}
