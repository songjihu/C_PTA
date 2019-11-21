/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	int n = 0, t = 0, i = 0, j = 0;
	int a[102], b[102], c[102], d[102], num_a = 0, num_b = 0;//¼×º° ¼×»® ÒÒº° ÒÒ»® ¼×ºÈ ÒÒºÈ
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d%d", &a[i], &b[i], &c[i], &d[i]);
		if (b[i] == (a[i] + c[i]) && b[i] != d[i])num_b++;
		if (d[i] == (a[i] + c[i]) && b[i] != d[i])num_a++;
	}
	printf("%d %d\n", num_a, num_b);
	return 0;
}
*/