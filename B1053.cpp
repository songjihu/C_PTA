/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {

	int n = 0, d = 0, i = 0, j = 0, s1 = 0, s2 = 0, k, t1 = 0;//12分别为可能闲置，闲置
	double e, t;
	cin >> n >> e >> d;
	for (i = 0; i < n; i++) {
		cin >> k; t1 = 0;
		for (j = 0; j < k; j++) {
			cin >> t;//用电量
			if (t < e)t1++;//低于阈值的天数++
		}
		if (k > d&& t1 > (k / 2))s2++;
		else if (t1 > (k / 2))s1++;
	}
	printf("%.1f%% %.1f%%", (double)s1 / n * 100, (double)s2 / n * 100);
	return 0;
}
*/