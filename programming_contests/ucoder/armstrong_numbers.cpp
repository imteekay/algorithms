#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{

    long int n;
    scanf("%li", &n);
    vector<int> vetor;

    while (n != 0) {

        int total = 0, temp = n, teste, result=0;

        while (temp != 0) {
            teste = temp % 10;
            vetor.push_back(teste);
            temp = temp / 10;
        }

        for (int i = 2; i < 10; i++) {
            total = 0;
            for (int j = 0; j < vetor.size(); j++) {
                total += pow(vetor[j], i);
            }

            if (total == n) {
                result = i;
                break;
            }
        }

        if (result)
            cout << result << endl;
        else
            cout << "N" << endl;

    	scanf("%li", &n);
        vetor.clear();
    }

    return 0;
}
