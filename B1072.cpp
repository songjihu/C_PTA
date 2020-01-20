/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
#include <map>
using namespace std;

int main() {

	int m, n, t, i, j, k, out[1002][12], flag[1002], s1 = 0, s2 = 0;
	char stu[1002][12][6], be_traced[8][6];
	for (i = 0; i < 1002; i++) { for (j = 0; j < 12; j++)out[i][j] = 0; flag[i] = 0; }//初始化
	cin >> n >> m;//学生人数和需要被查缴的物品种类数
	for (i = 0; i < m; i++) scanf("%s", be_traced[i]);
	for (i = 0; i < n; i++) {
		scanf("%s", stu[i][11]); cin >> t;
		for (j = 0; j < t; j++) {
			scanf("%s", stu[i][j]);
			for (k = 0; k < m; k++) //查找是否有违禁品
				if (strcmp(stu[i][j], be_traced[k]) == 0) { flag[i] = 1; out[i][j] = 1; break; }
		}
	}
	for (i = 0; i < n; i++) {
		if (flag[i] == 1) {
			s1++;
			printf("%s:", stu[i][11]);
			for (j = 0; j < 10; j++) if (out[i][j] == 1) { printf(" %s", stu[i][j]); s2++; }
			printf("\n");
		}
	}
	printf("%d %d\n", s1, s2);
	return 0;
}
*/