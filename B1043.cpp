/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

	int n = 0, t = 0, i = 0, j = 0;
	char s[10002];
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	scanf("%s", s); i = 0;
	while (s[i] != '\0') {
		i++;
		switch (s[i - 1])
		{
		case 'P':a++; continue;
		case 'A':b++; continue;
		case 'T':c++; continue;
		case 'e':d++; continue;
		case 's':e++; continue;
		case 't':f++; continue;
		default:continue;
		}
	}
	n = a + b + c + d + e + f;
	while (n != 0) {
		if (a > 0) { printf("P"); a--; n--; }
		if (b > 0) { printf("A"); b--; n--; }
		if (c > 0) { printf("T"); c--; n--; }
		if (d > 0) { printf("e"); d--; n--; }
		if (e > 0) { printf("s"); e--; n--; }
		if (f > 0) { printf("t"); f--; n--; }
	}
	return 0;
}
*/