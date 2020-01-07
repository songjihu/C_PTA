/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	int n = 0, t = 0, i = 0, j = 0, s = 0;
	int a[10];
	cin >> n;
	for (i = 0; i < n; i++) cin >> a[i];
	for (i = 0; i < n; i++) 
		for (j = i + 1; j < n; j++) 
			s = s + (a[i] + a[j]) * 11;
		
	printf("%d\n", s);
	return 0;
}
*/