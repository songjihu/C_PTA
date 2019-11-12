/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int bigger(int input,int b[]) {
	int i = 0, j = 0, max = 0, output = 0, t = 1000, a[4];
	for (i = 0; i < 4; i++) {
		a[i] = input / t;
		b[i] = a[i];
		input -= a[i] * t;
		t = t / 10;

	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (a[j] > a[max]) {
				max = j;
			}
		}
		output = output * 10 + a[max];
		a[max] = -1;
	}
	return output;
}

int smaller(int a[]) {
	int i = 0, j = 0, min = 0, output = 0, t = 1000, flag = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		output = output * 10 + a[min];
		a[min] = 10;
	}
	return output;
}

int main() {

	int n = 0;
	int i = 0, j = 0;
	char t = '0';
	int temp = 0, temp1 = 0;
	int x = 0, y = 0, z = 0, flag = 0;
	int a[4] = { 0,0,0,0 };

	scanf("%d", &temp);//ÊäÈë
	x = bigger(temp, a);
	y = smaller(a);
	temp = x - y;
	if (x == y) {
		printf("%04d - %04d = 0000", x, y);
		return 0;
	}
	else
	{
		printf("%04d - %04d = %04d\n", x, y, temp);
	}
	while (temp != 6174) {
		x = bigger(temp, a);
		y = smaller(a);
		temp = x - y;
		printf("%04d - %04d = %04d\n", x, y,temp);
	}
	

	return 0;
}
*/
