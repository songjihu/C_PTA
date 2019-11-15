/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

	int n = 0, t = 0, s = 0, flag = 0, count_a = 0, count_b = 0;
	int i = 0, j = 0;
	int a[129], b[129], visited[129];
	char s1[1002], s2[10002];
	for (i = 0; i < 129; i++) { a[i] = 0; b[i] = 0; visited[i] = 0; }
	scanf("%s%s", s1, s2);
	for (i = 0; s1[i] != '\0'; i++) { a[(int)s1[i]]++; count_a++; }
	for (i = 0; s2[i] != '\0'; i++) { b[(int)s2[i]]++; count_b++; }
	for (i = 0; s2[i] != '\0'; i++) 
		if (a[(int)s2[i]] < b[(int)s2[i]] && visited[(int)s2[i]] == 0) {
			visited[(int)s2[i]] = 1;
			flag = 1; s += (b[(int)s2[i]] - a[(int)s2[i]]);
		}
	flag == 1 ? printf("No %d", s) : printf("Yes %d", count_a - count_b);
	return 0;
}
*/