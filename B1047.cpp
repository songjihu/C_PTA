/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	int n = 0, t = 0, i = 0, j = 0, a[1002], b[1002], t1, max = -1;
	char temp[10], max_name[10];
	const char* split = "-"; char* p;
	for (i = 0; i < 1002; i++)a[i] = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s%d", &temp, &t);
		p = strtok(temp, split);
		t1 = 0;
		for (j = 0; p[j] != '\0'; j++) { t1 = t1 * 10 + temp[j] - '0'; }
		a[t1] += t;
		if (a[t1] >= max) { strcpy(max_name, p); max = a[t1]; }
	}
	
	printf("%s %d\n", max_name, max);
	return 0;
}
*/