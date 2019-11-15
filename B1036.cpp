/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

	float n = 0;
	int i = 0, j = 0;
	char c, t;
	scanf("%f%c%c", &n, &t, &c);
	for (i = 0; i < n; i++) printf("%c", c);
	printf("\n");
	for (i = 1; i < (int)(n * 0.5 + 0.5) - 1; i++) {
		printf("%c", c);
		for (j = 1; j < n - 1; j++) printf(" ");
		printf("%c\n",c);
	}
	for (i = 0; i < n; i++) printf("%c", c);
	printf("\n");
	return 0;
}
*/
