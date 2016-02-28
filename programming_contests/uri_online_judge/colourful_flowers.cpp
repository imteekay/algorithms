// https://www.urionlinejudge.com.br/judge/en/problems/view/1419

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double get_greater(int l1, int l2, int l3) {
	if (l1 > l2 && l1 > l3) return l1;
	else if (l2 > l3) return l2;
	else return l3;
}

double get_triangle_area(int l1, int l2, int l3) {
	if (l1 > l2 && l1 > l3) return l2 * l3 / 2;
	else if (l2 > l3) return l1 * l3 / 2;
	else return l1 * l2 / 2;
}

double get_smaller_circunference_radius(double triangle_area, double triangle_perimeter) {
	return 2 * triangle_area / triangle_perimeter;
}

int main() {
	
	double l1, l2, l3;
	
	while (scanf("%lf %lf %lf", &l1, &l2, & l3) != EOF) {
		double greater = get_greater(l1, l2, l3);
		double radius = greater / 2;
		double circunference_area = M_PI * radius * radius;
		double triangle_area = get_triangle_area(l1, l2, l3);
		double smaller_circunference_radius = get_smaller_circunference_radius(triangle_area, l1+l2+l3);
		double smaller_circunference_area = M_PI * smaller_circunference_radius * smaller_circunference_radius;
		cout << fixed << setprecision(4) << circunference_area - triangle_area << " " << triangle_area - smaller_circunference_area << " " << smaller_circunference_area << endl;
	}
	
	return 0;
}
