#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    long long int x;
    
    cin >> n;
    
    while (n--) {
        cin >> x;
        cout << (x+1) / 2 << endl;
    }
 
    return 0;
}