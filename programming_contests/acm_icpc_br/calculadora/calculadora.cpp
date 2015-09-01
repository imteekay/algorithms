#include<stdio.h>
#include <iostream>

using namespace std;

int main()
{

    int ip1[4];
    int ip2[4];
    int mas[4];
    

    while (scanf("%i.%i.%i.%i %i.%i.%i.%i %i.%i.%i.%i", &ip1[0],&ip1[1],&ip1[2],&ip1[3],&ip2[0],&ip2[1],&ip2[2],&ip2[3],&mas[0],&mas[1],&mas[2],&mas[3]) != -1) {
        int r = 1;
        int i = 0;
        for (i = 0; i < 4; i++)
        {
        	if ((ip1[i] & mas[i]) != (ip2[i] & mas[i]))
        		r = 0;
        }

        if (r)
        	cout << "S" << endl;
       	else
       		cout << "N" << endl;
    }

    return 0;
}
