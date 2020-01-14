/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	int n = 0, i = 0, j = 0;
	cin >> n;
	double max = -1, a, b, t;
	for (i = 0; i < n; i++) {
		cin >> a >> b;
		t = sqrt(a * a + b * b);
		if (t > max)max = t;
	}
	printf("%0.2lf", max);
	return 0;
}
*/