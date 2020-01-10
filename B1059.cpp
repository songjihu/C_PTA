/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int mytrans(char a[]) {
	//把id转换为数字
	int t = 0;
	for (int i = 0; i < 4; i++) t = t * 10 + a[i] - '0';
	return t;
}

bool isSushu(int t) {
	//判断是否为素数
	if (t == 1)return false;
	for (int i = 2; i < t / 2; i++) {
		if (t % i == 0)return false;//不是
	}
	return true;
}

int main() {

	int n1 = 0, n2 = 0, t = 0, i = 0, j = 0;
	int flag[10002];//0-2表示3种奖项，3领过了，4没奖
	char winner[10002][10], find[10002][10];
	char win_type[5][30] = { "Mystery Award","Minion","Chocolate","Checked","Are you kidding ?" };
	for (i = 0; i < 10002; i++)flag[i] = 4;
	cin >> n1;
	//输入winner
	for (i = 0; i < n1; i++) {
		scanf("%s", winner[i]);
		if (isSushu(i+1))flag[mytrans(winner[i])] = 1;//小黄人
		else flag[mytrans(winner[i])] = 2;//巧克力
	}
	flag[mytrans(winner[0])] = 0;//一等奖
	cin >> n2;
	//输入查询者
	for (i = 0; i < n2; i++)scanf("%s", find[i]);
	for (i = 0; i < n2; i++) {
		if (flag[mytrans(find[i])] < 4) {
			printf("%s: %s\n", find[i], win_type[flag[mytrans(find[i])]]);
			flag[mytrans(find[i])] = 3;
		}
		else{
			printf("%s: Are you kidding?\n", find[i]);//没找到
		}
	}
	return 0;
}
*/