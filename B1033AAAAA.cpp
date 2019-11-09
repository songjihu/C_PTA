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
	int i = 0, j = 0, flag = 0, plus = 0;
	char a[100002], b[100002], c[100002];
	cin.getline(a, 100002);//第一行可能为空
	cin.getline(b, 100002);
	//先检测大写键是否损坏
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] == '+') {
			plus = 1;
			break;
		}
	}

	for (i = 0; b[i] != '\0'; i++) {
		flag = 0;//是否坏掉
		for (j = 0; a[j] != '\0'; j++) {
			if (b[i] == a[j]) {
				//想打印大写字母或其他但此键坏掉
				flag = 1; break;
			}
			if (b[i] >= 'a' && b[i] <= 'z' && b[i] == a[j] + 32) {
				//想打印小写字母但此键坏掉
				flag = 1; break;
			}
			if (b[i] >= 'A' && b[i] <= 'Z' && plus == 1) {
				//想打印大写字母且此键没有坏掉，但上档键坏掉
				flag = 1; break;
			}
		}
		if (flag == 0) {
			printf("%c", b[i]);
		}
	}
	printf("\n");
	return 0;
}
*/