/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

long long gcd(long long a, long long b) {
	return b ? gcd(b, a % b) : a;
}

bool isbiger(long long n1, long long m1, long long n2, long long m2) {
	if (n1 * m2 > m1* n2)return true; else return false;
}

int main() {

	long long t = 0, i = 0, j = 0;
	long long n1 = 0, n2 = 0, m1 = 0, m2 = 0, k = 0, m = 0;
	char c;
	//����
	scanf("%lld%c%lld", &n1, &c, &m1);
	scanf("%lld%c%lld%lld", &n2, &c, &m2,&k);
	if (!isbiger(n2, m2, n1, m1)) {
		t = n1; n1 = n2; n2 = t;//���������Ҳ࣬����
		t = m1; m1 = m2; m2 = t;
	}
	//����
	for(i=0;i<=k;i++)
		if (isbiger(i, k, n1, m1) && isbiger(n2, m2, i, k) && gcd(i, k) == 1)
		{
			printf("%lld/%lld", i, k);
			i++;
			break;
		}
	for (; i <= k; i++)
		if (isbiger(i, k, n1, m1) && isbiger(n2, m2, i, k) && gcd(i, k) == 1)
			printf(" %lld/%lld", i, k);
	//���
	return 0;
}
*/