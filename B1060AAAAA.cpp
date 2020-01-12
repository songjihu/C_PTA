/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;


int main() {
	//满足有 E 天骑车超过 E 英里的最大整数 E
	int n = 0, i = 0, j = 0, a[100002], e = 0, flag = 0;
	cin >> n;
	for (i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);//排序
	for (i = n - 1; i >= 0; i--) {
		if (a[i] > e + 1)e++;
		else break;
	}
	cout << e << endl;
	return 0;
}
*/