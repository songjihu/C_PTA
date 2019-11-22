/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;


int main() {

	int n = 0, i = 0, j = 0;
	double t, s = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lf", &t); 
		s += (n - i) * t * (i + 1);
	}
	printf("%.2lf\n", s);
	return 0;
}
*/