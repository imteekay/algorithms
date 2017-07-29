// https://www.urionlinejudge.com.br/judge/en/problems/view/1704

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct task {
  int V, T;
};

bool sortByTime(task &ta1, task &ta2) {
  if (ta1.V >= ta2.V) return true;
  else if (ta1.V < ta2.V) return false;
  else return ta1.T <= ta2.T;
}

int main() {
	int N, H, V, T;

	while (cin >> N >> H) {
    vector<task> tasks;

    while (N--) {
      cin >> V >> T;
      task ta;
      ta.V = V;
      ta.T = T;
      tasks.push_back(ta);
    }

    sort(tasks.begin(), tasks.end(), sortByTime);

    int value = 0;

    for (int i = 0; i < H && i < 10; i++) {
      if (tasks[i].T <= H) value += tasks[i].V;
      cout << "value: " << value << endl;
    }

    cout << value << endl;
    cout << "---" << endl;
    for (int i = 0; i < tasks.size(); i++) {
      cout << tasks[i].T << " " << tasks[i].V << endl;
    }
  }

  return 0;
}
