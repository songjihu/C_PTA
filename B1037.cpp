/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

	char t;
	int i = 0, j = 0, flag = 0;
	long a[4], b[4], c[4];
	for (i = 1; i < 4; i++)scanf("%ld%c", &a[i], &t); 
	a[0] = a[1] * 29 * 17 + a[2] * 29 + a[3];
	for (i = 1; i < 4; i++)scanf("%ld%c", &b[i], &t); 
	b[0] = b[1] * 29 * 17 + b[2] * 29 + b[3];
	c[0] = b[0] - a[0]; 
	c[0] > 0 ? flag = 1 : flag = -1;
	c[1] = c[0] / (29 * 17);
	c[2] = (c[0] - c[1] * 29 * 17) / 29;
	c[3] = c[0] - c[1] * 29 * 17 - c[2] * 29;
	printf("%ld.%ld.%ld", flag * abs(c[1]), abs(c[2]), abs(c[3]));
	

	return 0;
}
*/