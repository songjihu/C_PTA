/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

char thirteen[13] = { '0','1','2','3','4','5','6','7','8','9','J','Q','K' };

int main() {

	int n = 0, t = 0, i = 0, j = 0, k = 1, num_a, num_b, loc;
	char a[102], b[102];
	int	d[102], c[102];
	scanf("%s %s", a, b); num_a = strlen(a); num_b = strlen(b);
	loc = num_b - 1;
	for (i = num_a - 1; i >= 0 && loc >= 0; i--) {
		//奇数位
		if (k % 2 == 0) c[loc] = (int)b[loc] - a[i] < 0 ? b[loc] - a[i] + 10 : b[loc] - a[i];
		else c[loc] = (int)(a[i] + b[loc] - 2 * '0') % 13;
		k++; loc--;//k记录第几位，loc记录输出存放位置
	}
	//处理剩余
	if (loc != 0)for (; loc >= 0; loc--)c[loc] = b[loc] - '0';
	if (num_a > num_b) {
		//a比b长时，补0继续计算
		loc = num_a - num_b - 1;
		for (; i >= 0; i--) {
			//奇数位
			if (k % 2 == 0) d[loc] = (int)'0' - a[i] < 0 ? '0' - a[i] + 10 : '0' - a[i];
			else d[loc] = (int)(a[i] + '0' - 2 * '0') % 13;
			k++; loc--;//k记录第几位，loc记录输出存放位置
		}
	}
	if (num_a - num_b > 0)for (i = 0; i < num_a - num_b; i++)printf("%c", thirteen[d[i]]);
	for (i = 0; i < num_b; i++)printf("%c", thirteen[c[i]]); printf("\n");
	return 0;
}
*/