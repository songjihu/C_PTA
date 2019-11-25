/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	int n = 0, t = 0, i = 0, j = 0;
	double r1, p1, r2, p2, a, b;//Èý½ÇÐÎÊ½ R(cos(P)+isin(P))
	scanf("%lf%lf%lf%lf", &r1, &p1, &r2, &p2);
	a = r1 * r2 * (cos(p1) * cos(p2) - sin(p1) * sin(p2));
	b = r1 * r2 * (cos(p1) * sin(p2) + sin(p1) * cos(p2));
	if (fabs(a) < 0.005) a = 0;
	if (fabs(b) < 0.005) b = 0;
	
	if (b < 0)printf("%.2lf%.2lfi", a, b);
	else printf("%.2lf+%.2lfi", a, b);
	return 0;
}
*/