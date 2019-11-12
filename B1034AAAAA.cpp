/*#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

long long a, b, c, d;

long long gcd(long long x, long long y) {
	//求x和y最大公约数
	return y == 0 ? x : gcd(y, x % y);
}

void func(long long x,long long y) {
	//化简x/y
	if (x * y == 0) {
		//分子分母有一个是0
		printf("%s", y == 0 ? "Inf" : "0");
		return;
	}
	bool flag = ((x < 0 && y>0) || (x > 0 && y < 0));//正负标志
	x = abs(x); y = abs(y);//保存正负后都化为绝对值来计算
	long long t = x / y;
	printf("%s", flag ? "(-" : "");
	if (t != 0)printf("%lld", t);//输出整数部分
	if (x % y == 0) {
		printf("%s", flag ? ")" : "");//若无分数部分
		return;
	}
	if (t != 0)printf(" ");//有整数且有分数部分，有空格隔开
	x = x - t * y;//减小分子为去掉整数后的部分
	long long temp = gcd(x, y);
	x = x / temp; y = y / temp;//化简同除最大公约数
	printf("%lld/%lld%s", x, y, flag ? ")" : "");
}

int main() {
	
	scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
	func(a, b); printf(" + "); func(c, d); printf(" = "); func(a * d + c * b, b * d); printf("\n");
	func(a, b); printf(" - "); func(c, d); printf(" = "); func(a * d - c * b, b * d); printf("\n");
	func(a, b); printf(" * "); func(c, d); printf(" = "); func(a * c, b * d); printf("\n");
	func(a, b); printf(" / "); func(c, d); printf(" = "); func(a * d, b * c);
	return 0;
}
*/