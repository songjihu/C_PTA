#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

	int n = 0, t = 0;
	int i = 0, j = 0;
	char s[100002], c;
	long long p[100002], a[100002];
	long long num_PAT = 0;
	for (j = 0; j < 100002; j++) { a[j] = -1; p[j] = -1; }//-1代表此位置无此字母
	scanf("%s", s); 
	while (s[i] != '\0') {  i++; }
	n = i;
	for (i = n; i >= 0; i++) {
		if (s[i] == 'T') t++;
		if (s[i] == 'A') a[i] = t;//保存T的个数到a[i]
	}
	for (i = 0; i < n; i++) {
		if (s[i] == 'P') 
			for (j = i + 1; j < n; j++) {
				if (a[j] != -1)num_PAT += a[j];
			}
	}
	printf("%lld", num_PAT);
	return 0;
}
