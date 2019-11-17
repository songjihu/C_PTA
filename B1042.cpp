/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

	int n = 0, t = 0, i = 0, j = 0, b[128];
	char c, a[1002];
	scanf("%c", &c); i = 0;
	while (c != '\n') {
		if (c >= 'A' && c <= 'Z') { a[i] = c + 'a' - 'A'; i++; }
		if (c >= 'a' && c <= 'z') { a[i] = c; i++; }
		scanf("%c", &c);
	}
	n = i; int max = 0;
	for (i = 0; i < 128; i++)b[i] = 0;
	for (i = 0; i < n; i++)b[(int)a[i]]++;
	for (i = 0; i < 128; i++)b[max] < b[i] ? max = i : max = max;
	printf("%c %d", max, b[max]);
	return 0;
}
*/