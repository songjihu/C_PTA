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
	for (j = 0; j < 100002; j++) { a[j] = -1; p[j] = -1; }//-1�����λ���޴���ĸ
	scanf("%s", s); i = 0;
	while (s[i] != '\0') {  i++; }
	n = i;
	for (i = n - 1; i >= 0; i--) {
		if (s[i] == 'T') t++;//�ۼ�t�ĸ���
		if (s[i] == 'A') { a[i] = t; tt += a[i]; }//����T�ĸ�����a[i]��ͬʱ�ۼ�at�ĸ���
		if (s[i] == 'P') { p[i] = tt; num_PAT += p[i]; }
	}
	printf("%lld", num_PAT % 1000000007);
	return 0;
}
*/