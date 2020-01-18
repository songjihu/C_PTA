/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
#include <map>
using namespace std;

int main() {

	int n, i, j, p;
	double input[10002], t = 0;
	cin >> n;
	for (i = 0; i < n; i++) cin >> input[i];
	sort(input, input + n);
	for (i = 1; i < n; i++) {
		t = (input[i - 1] + input[i]) / 2;
		input[i] = t; p = i;
		for (j = i + 1; j < n; j++) {
			if (input[j] < input[i]) {
				input[p] = input[j]; p++;
			}
			else break;
		}
		input[p] = t;
	}
	printf("%d", (int)input[n - 1]);
	return 0;
}
*/