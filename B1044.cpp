#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void my_translate(int x, int a[13]) {
	//10进制转换为13进制数
	int y = 0, i = 12;
	for (int j = 0; j < 13; j++) a[j] = 0;
	while (x != 0) {
		a[i] = x % 13;
		x = x / 13;
		i--;
	}
	return;
}

int main() {

	int n = 0, t = 0, i = 0, j = 0;
	scanf("%d", &n);
	for(i=0)
	return 0;
}
