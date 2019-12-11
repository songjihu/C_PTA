/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {
	/*分析：使用sscanf和sprintf函数～
	sscanf() – 从一个字符串中读进与指定格式相符的数据
	sprintf() – 字符串格式化命令，主要功能是把格式化的数据写入某个字符串中
	https://www.liuchuo.net/archives/617 */

/*	int n = 0, i = 0, j = 0, err_flag, count = 0;
	double temp, sum = 0;
	char a[50], b[50], c[50];
	cin >> n;
	for (i = 0; i < n; i++) {
		scanf("%s", a); strcpy(c, a);
		sscanf(a, "%lf", &temp);//从字符串a中读取一个浮点数给temp
		sprintf(b, "%.2lf", temp);//把浮点数temp赋予字符串b
		//用字符串a和b逐个字符进行比较，不满足格式则错误
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