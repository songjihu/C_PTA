/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

	int n = 0, k = 0, t = 0;
	int i = 0, j = 0, a[101], b[100002];
	for (i = 0; i < 101; i++) a[i] = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &t); a[t]++;
	}
	scanf("%d", &k);
	scanf("%d", &t); printf("%d", a[t]);
	for (i = 1; i < k; i++) {
		scanf("%d", &t); printf(" %d", a[t]);
	}
	return 0;
}
*/