#include <iostream>
using namespace std;

int main() {

    int n, n1, n2, total, counter = 0;

    cin >> n >> total;

    while (n--) {
        cin >> n1 >> n2;
        if (n1 + n2 >= total) counter++;
    }

    cout << counter << endl;

    return 0;
}
