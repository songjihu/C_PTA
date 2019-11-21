/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;


int main() {

	int n = 0, t = 0, i = 0, j = 0, min = 0, max = 0;
	int k = 0, flag[100002];
	long a[100002], b[100002];
	scanf("%d", &n); if (n == 0) { printf("0\n"); return 0; }
	for (i = 0; i < n; i++) { scanf("%ld", &a[i]); flag[i] = 0; }
	max = a[0]; min = a[n - 1]; flag[0] = 1; flag[n - 1] = 1;
	for (i = 1; i < n; i++) {
		max = max > a[i - 1] ? max : a[i - 1];
		if (a[i] >= max) flag[i]++;//比左边最大值大
	}
	for (i = n - 2; i >= 0; i--) {
		min = min < a[i + 1] ? min : a[i + 1];
		if (a[i] <= min) flag[i]++;//比右边最小值小
	}
	for (i = 0; i < n; i++)if (flag[i] == 2) { b[k] = a[i]; k++; }
	sort(b, b + k);
	if (k == 0)printf("%d\n\n", k);
	else printf("%d\n%ld", k, b[0]);
	if (k > 1)for (i = 1; i < k; i++)printf(" %ld", b[i]);
	return 0;
}
*/