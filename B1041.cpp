/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

struct stu_info
{
	char s[20];//×¼¿¼Ö¤ºÅ
	int num;//¿¼ÊÔ×ùÎ»ºÅ
};

int main() {

	int n = 0, m = 0, t = 0, i = 0, j = 0, b[1002], c[1002];
	stu_info a[1002];
	scanf("%d", &n);
	for (i = 0; i < n; i++) { b[i] = 0; c[i] = 0; }
	for (i = 0; i < n; i++) { scanf("%s%d%d", &a[i].s, &t, &a[i].num); b[t] = i; }
	scanf("%d", &m);
	for (i = 0; i < m; i++)scanf("%d", &c[i]);
	for (i = 0; i < m; i++)printf("%s %d\n", a[b[c[i]]].s, a[b[c[i]]].num);
	return 0;
}
*/