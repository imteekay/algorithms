#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {

    int n, x;

    while (cin >> n && n != 0) {
        int total = 0;
        map<int, int> m;
        vector<int> v;
        int aux;

        for (int i = 0; i < n; ++i) {
            cin >> x;
            v.push_back(x);
            m[x] = x;
        }

        map<int, int>::iterator it;

        for (int i = 0; i < n; ++i) {
            aux = v[i];
            total += m[aux];
            for (it = m.begin(); it != m.end(); ++it) {
                it->second++;
            }
            m[aux] = 1;
        }

        cout << total << endl;
    }

    return 0;
}
