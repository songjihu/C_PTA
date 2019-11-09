/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {

	int n = 0, flag = 0;
	int i = 0, j = 0;
	long long p = 0, a[100002];
	scanf("%d%lld", &n, &p);

	if (n == 0) {
		printf("0");
		return 0;
	}

	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);
	long long min = 0, max = 0;
	int maxwidth = 0;
	for (i = 0; i < n - maxwidth; i++) {
		min = a[i];
		for (j = i + maxwidth; j < n; j++) {
			max = a[j];
			if (max > min* p) {
				break;//一直到前一个满足条件break
			}
		}
		if (j - i> maxwidth) {
			maxwidth = j - i;//判断尽量放在外边，解决超时
		}
	}
	
	printf("%d", maxwidth);
	return 0;
}
*/
