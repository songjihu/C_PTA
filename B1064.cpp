/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int friend_num(int x) {
	int t = 0;//求各位数字和
	while (x != 0)
	{
		t += x % 10;
		x = x / 10;
	}
	return t;
}

int main() {

	int n = 0, t = 0, i = 0, s = 0, a[10002];
	for (i = 0; i < 10002; i++)a[i] = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> t;
		a[friend_num(t)]++;
	}

	for (i = 0; i < 10002; i++)if (a[i] > 0)s++;
	
	cout << s << endl;
	for (i = 0; i < 10002; i++) {
		if (a[i] > 0) {
			printf("%d", i);
			i++;
			break;
		}
	}
	for (; i < 10002; i++)
		if (a[i] > 0)printf(" %d", i);
	return 0;
}
*/