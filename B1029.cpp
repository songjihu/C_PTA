#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void plug_in(char a[], char c) {
	
	int i = 0;
	if (c >= 'a' && c <= 'z') {
		c = c - 32;
	}
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] == c) {
			return;
		}
	}
	
	a[i] = c;
	return;
}

int main() {

	int n = 0;
	int i = 0, j = 0;
	char a[100], b[100];
	char out[100];
	for (i = 0; i < 100; i++) {
		out[i] = '\0';a[i] = '\0';b[i] = '\0';
	}
	scanf("%s%s", a, b);
	for (i = 0, j = 0; a[i] != '\0'; i++) {
		if (b[j] != a[i]) {
			plug_in(out, a[i]);
		}
		else
		{
			j++;
		}
	}

	printf("%s", out);

	return 0;
}
