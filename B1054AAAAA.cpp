/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {
	/*������ʹ��sscanf��sprintf������
	sscanf() �C ��һ���ַ����ж�����ָ����ʽ���������
	sprintf() �C �ַ�����ʽ�������Ҫ�����ǰѸ�ʽ��������д��ĳ���ַ�����
	https://www.liuchuo.net/archives/617 */

/*	int n = 0, i = 0, j = 0, err_flag, count = 0;
	double temp, sum = 0;
	char a[50], b[50], c[50];
	cin >> n;
	for (i = 0; i < n; i++) {
		scanf("%s", a); strcpy(c, a);
		sscanf(a, "%lf", &temp);//���ַ���a�ж�ȡһ����������temp
		sprintf(b, "%.2lf", temp);//�Ѹ�����temp�����ַ���b
		//���ַ���a��b����ַ����бȽϣ��������ʽ�����
		err_flag = 0;
		for (j = 0; j < strlen(a); j++)
			if (a[j] != b[j]) { err_flag = 1; break; }
		if (temp > 1000 || temp < -1000 || err_flag == 1)
			printf("ERROR: %s is not a legal number\n", c);
		else
		{
			sum += temp;
			count++;
		}
	}
	if (count == 0)printf("The average of 0 numbers is Undefined\n");
	if (count == 1)printf("The average of 1 number is %.2lf\n", sum);
	if (count > 1)printf("The average of %d numbers is %.2lf\n", count, double(sum / count));
	return 0;
}
*/