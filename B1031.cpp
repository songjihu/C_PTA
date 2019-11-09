/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


int main() {

	int n = 0;
	int i = 0, j = 0, flag = 0, s = 0, everprint = 0;
	char a[102][20];//100个以内18尾身份证号
	int b[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };//1-17位权值
	char m[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", a[i]);
	}

	for (i = 0; i < n; i++) {
		s = 0; flag = 0;
		for (j = 0; j < 17; j++) {
			//先判断是不是含其他值
			if (a[i][j] > '9' || a[i][j] < '0') {
				printf("%s\n", a[i]);
				flag = 1; everprint = 1;
				break;
			}
			s += (a[i][j] - '0') * b[j];
		}
		if (m[s % 11] != a[i][j] && flag == 0) {
			printf("%s\n", a[i]);
			flag = 1; everprint = 1;
		}
	}

	if (everprint == 0) {
		printf("All passed");
	}

	return 0;
}
*/