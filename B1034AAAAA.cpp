/*#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

long long a, b, c, d;

long long gcd(long long x, long long y) {
	//��x��y���Լ��
	return y == 0 ? x : gcd(y, x % y);
}

void func(long long x,long long y) {
	//����x/y
	if (x * y == 0) {
		//���ӷ�ĸ��һ����0
		printf("%s", y == 0 ? "Inf" : "0");
		return;
	}
	bool flag = ((x < 0 && y>0) || (x > 0 && y < 0));//������־
	x = abs(x); y = abs(y);//���������󶼻�Ϊ����ֵ������
	long long t = x / y;
	printf("%s", flag ? "(-" : "");
	if (t != 0)printf("%lld", t);//�����������
	if (x % y == 0) {
		printf("%s", flag ? ")" : "");//���޷�������
		return;
	}
	if (t != 0)printf(" ");//���������з������֣��пո����
	x = x - t * y;//��С����Ϊȥ��������Ĳ���
	long long temp = gcd(x, y);
	x = x / temp; y = y / temp;//����ͬ�����Լ��
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