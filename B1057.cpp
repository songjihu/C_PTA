/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;


int main() {

	int n = 0, t = 0;
	long long i = 0, j = 0, s = 0;
	char temp;
	//输入
	while (true) {
		scanf("%c", &temp);
		if (temp == '\n')break;
		if (temp >= 'a' && temp <= 'z') s = s + temp - 'a' + 1;
		if (temp >= 'A' && temp <= 'Z') s = s + temp - 'A' + 1;
	}
	//转换进制
	while (s != 0) {
		s % 2 == 1 ? j += 1 : i += 1;
		s /= 2;
	}
	printf("%lld %lld\n", i, j);
	return 0;
}
*/