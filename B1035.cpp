#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

bool is_same_a(int a[], int b[],int n) {
	for (int i = 0; i < n; i++)
		if (a[i] != b[i]) return false;
	return true;
}

void insertion_sort(int a[],int b[],int n) {
	//²åÈëÅÅÐò
	int i, j, min = 0, temp;
	bool flag = false;
	for (i = 0; i < n; i++) {
		min = i;
		for (j = i; j < n; j++)
			if (a[j] < a[min]) min = j;
		temp = a[i]; a[i] = a[min]; a[min] = temp;
		if (flag) {
			printf("%d", a[0]);
			for (int k = 1; k < n; k++) printf(" %d", a[k]); printf("\n");
			return;
		}
		flag = is_same_a(a, b, n);
	}	
}


void merge_sort(int a[], int b[], int n) {
	//ºÏ²¢ÅÅÐò
	int t = 1, start = 0;
	bool flag = false;
	for (int i = 0; pow(2, i) < n; i++) {
		t = t * 2; start = 0;
		for (int j = 0; j < n; j++) {
			if (start + t <= n) {
				sort(a + start, a + start + t);
				start = start + t + 1;
			}
			else
			{
				sort(a + start, a + n);
				break;
			}
		}
		if (flag) {
			printf("%d", a[0]);
			for (int k = 1; k < n; k++) printf(" %d", a[k]); printf("\n");
			return;
		}
		flag = is_same_a(a, b, n);
	}
	return;
}

int main() {

	int n = 0, a[102], b[102], c[102];
	scanf("%d", &n);
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
