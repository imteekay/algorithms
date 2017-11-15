#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double a, b, c;
    double violets, roses, girrassois;

    while(cin >> a >> b >> c){
        double p = (a+b+c) / 2.0;
        double triangulo, circ_p, circ_g;

        triangulo = sqrt(p*(p-a)*(p-b)*(p-c));
        circ_p = pow(triangulo/p,2)*(M_PI);
        circ_g = pow((a*b*c)/(4*triangulo),2)*(M_PI);

        violets = triangulo - circ_p;
        girrassois = circ_g - triangulo;
        roses = circ_p;

        cout << fixed << setprecision(4);

        cout << girrassois << " " << violets << " " << roses << endl;
    }

    return 0;
}
