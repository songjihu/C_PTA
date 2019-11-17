/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

	long long n = 0, t = 0, tt = 0;
	int i = 0, j = 0;
	char s[100002], c;
	long long p[100002], a[100002];
	long long num_PAT = 0;
	for (j = 0; j < 100002; j++) { a[j] = -1; p[j] = -1; }//-1代表此位置无此字母
	scanf("%s", s); i = 0;
	while (s[i] != '\0') {  i++; }
	n = i;
	for (i = n - 1; i >= 0; i--) {
		if (s[i] == 'T') t++;//累计t的个数
		if (s[i] == 'A') { a[i] = t; tt += a[i]; }//保存T的个数到a[i]，同时累计at的个数
		if (s[i] == 'P') { p[i] = tt; num_PAT += p[i]; }
	}
	printf("%lld", num_PAT % 1000000007);
	return 0;
}
*/