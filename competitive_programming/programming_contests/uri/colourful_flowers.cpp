// https://www.urionlinejudge.com.br/judge/en/problems/view/1419

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double get_greater_radius(int a, int b, int c) {
	double bottom = sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c));
	return (a * b * c) / (bottom);
}

double get_triangle_area(int l1, int l2, int l3) {
	double perim = (l1 + l2 + l3) / 2.0;
	double part1 = perim - l1;
	double part2 = perim - l2;
	double part3 = perim - l3;
	double area = sqrt(perim * part1 * part2 * part3);
	return area;
}

double get_smaller_circunference_radius(double triangle_area, double triangle_perimeter) {
	return 2 * triangle_area / triangle_perimeter;
}

int main() {
	
	double l1, l2, l3;
	const double PI = 3.1415926535897;
	
	while (scanf("%lf %lf %lf", &l1, &l2, & l3) != EOF) {
		double radius = get_greater_radius(l1, l2, l3);
		double circunference_area = PI * radius * radius;
		double triangle_area = get_triangle_area(l1, l2, l3);
		double smaller_circunference_radius = get_smaller_circunference_radius(triangle_area, l1+l2+l3);
		double smaller_circunference_area = PI * smaller_circunference_radius * smaller_circunference_radius;
		cout << fixed << setprecision(4) << circunference_area - triangle_area << " " << triangle_area - smaller_circunference_area << " " << smaller_circunference_area << endl;
	}
	
	return 0;
}
