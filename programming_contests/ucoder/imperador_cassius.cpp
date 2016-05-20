#include <iostream>
using namespace std;

int main() {

    int n1, n2, n=1;

    while (cin >> n1 && n1 != 0) {
        cin >> n2;
        cout << "Instancia " << n << endl;

        if (n1 == 1 && n2 == 2) cout << "segundo" << endl;
        else if (n1 == 1 && n2 == 3) cout << "primeiro" << endl;
        else if (n1 == 2 && n2 == 1) cout << "primeiro" << endl;
        else if (n1 == 2 && n2 == 3) cout << "segundo" << endl;
        else if (n1 == 3 && n2 == 1) cout << "segundo" << endl;
        else if (n1 == 3 && n2 == 2) cout << "primeiro" << endl;
        else cout << "empate" << endl;
        cout << endl;
        n++;
    }

    return 0;
}
