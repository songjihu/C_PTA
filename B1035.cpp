/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

bool is_same_a(int a[], int b[],int n) {
	for (int i = 0; i < n; i++)
		if (a[i] != b[i]) return false;
	return true;
}

void out(int type, int a[], int n) {
	if (type == 1) {
		printf("Insertion Sort\n%d",a[0]);
		for (int i = 1; i < n; i++) printf(" %d", a[i]);
		printf("\n");
	}
	else
	{
		printf("Merge Sort\n%d", a[0]);
		for (int i = 1; i < n; i++) printf(" %d", a[i]);
		printf("\n");
	}
}

void insertion_sort(int a[],int b[],int n) {
	//²åÈëÅÅÐò
	int i, j, temp, flag = 0;
	for (i = 1; i < n; i++) {
		temp = a[i];j = i;
		while (j > 0 && temp < a[j - 1]) {
			a[j] = a[j - 1];
			j = j - 1;
		}
		a[j] = temp;
		if (flag == 1) { out(1, a, n); return; }
		if (is_same_a(a, b, n)) flag = 1;
	}
}


void merge_sort(int a[], int b[], int n) {
	//ºÏ²¢ÅÅÐò£¬·ÇµÝ¹é
	int flag = 0;
	for (int i = 2;; i *= 2) {
		for (int j = 0; j < n; j += i) {
			sort(a + j, a + (j + i > n ? n : j + i));
		}
		if (flag == 1) { out(0, a, n); break; }
		if (is_same_a(a, b, n))flag = 1;
		if (i > n)break;
	}
}

int main() {

	int n = 0, a[102], b[102], c[102];
	scanf("%d", &n);
	if (n == 0) return 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &c[i]);
	}
	insertion_sort(a, c, n);
	merge_sort(b, c, n);

	return 0;
}
*/