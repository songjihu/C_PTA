/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

char low_thirteen[14][5] = {"","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
char high_thirteen[14][5] = { "",  "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };

struct node
{
	int type;//输出10进制or13进制
	char a[15];//13进制数
	char b[15];
	int x;//10进制数
};

int main() {

	int n = 0, t = 0, i = 0, j = 0, k = 0, flag = 0;
	char temp[20], a[20], b[20];
	node out[102];
	scanf("%d", &n); cin.getline(temp, 15);//这里边有一行空的
	for (i = 0; i < n; i++) {
		cin.getline(temp, 15);//取一行
		if (temp[0] >= '0' && temp[0] <= '9') {
			//十进制输入
			t = 0, j = 0;
			while (temp[j] != '\0') { t = t * 10 + (temp[j] - '0'); j++; }
			out[i].type = 10;
			if (t == 0) { strcpy(out[i].b, "tret"); strcpy(out[i].a, ""); continue; }
			strcpy(out[i].a, high_thirteen[t / 13]);
			strcpy(out[i].b, low_thirteen[t % 13]);
		}
		else
		{	//13进制输入
			out[i].type = 13;
			//只有1位低位时
			flag = 0;
			if (strcmp("tret", temp) == 0) { out[i].x = 0; continue; }
			for (j = 0; j < 14; j++)
				if (strcmp(low_thirteen[j], temp) == 0) { out[i].x = j; flag = 1; break; }
			if (flag == 1)continue;//若已经找到则无需继续
			//只有1位低位时
			flag = 0;
			for (j = 0; j < 14; j++)
				if (strcmp(high_thirteen[j], temp) == 0) { out[i].x = 13 * j; flag = 1; break; }
			//2位时
			if (flag == 1)continue;//若已经找到则无需继续
			j = 0; k = 0, t = 0;
			while (temp[j] != ' ') { a[j] = temp[j]; j++; }a[j] = '\0'; j++;
			while (temp[j] != '\0') { b[k] = temp[j]; k++; j++; }b[k] = '\0';
			for (j = 0; j < 14; j++)
				if (strcmp(low_thirteen[j], b) == 0) { t = j; break; }
			for (j = 0; j < 14; j++)
				if (strcmp(high_thirteen[j], a) == 0) { out[i].x = j * 13 + t; break; }
		}
	}
	for (i = 0; i < n; i++) {
		if (out[i].type == 13)printf("%d\n", out[i].x);
		else
		{
			if (strcmp(out[i].a, "") == 0)printf("%s\n", out[i].b);
			else 
				if (strcmp(out[i].b, "") == 0)printf("%s\n", out[i].a);
				else printf("%s %s\n", out[i].a, out[i].b);
		}
	}
	return 0;
}
*/