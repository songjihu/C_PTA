/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
struct stu {
	char name[10];
	int height;
};

int cmp(struct stu a, struct stu b) {  //从身高依次排序
	if (a.height != b.height)
		return a.height > b.height;
	else
		return strcmp(a.name, b.name) < 0;
}

int main() {

	int n = 0, k = 0, i = 0, j = 0, m = 0, point = 0, flag = 0, count = 0;
	vector<stu> v;
	stu temp;
	cin >> n >> k;
	for (i = 0; i < n; i++)
	{
		scanf("%s%d", temp.name, &temp.height);
		v.push_back(temp);
	}
	sort(v.begin(), v.end(), cmp);//从高到低排序
	m = n / k + n % k;//最后一排人数m
	char a[10002][10];
	for (i = 0; i < k; i++) {
		//从最后一排开始，每次打印一排
		flag = 1; point = m / 2 + 1;//开始放置的位置，即为中间位置
		for (j = 0; j < m; j++) {
			//放置m次 flag表示移动方式
			strcpy(a[point - 1], v[count].name);
			flag % 2 == 1 ? point -= flag : point += flag;
			flag++; count++;
		}
		for (j = 0; j < m - 1; j++) printf("%s ", a[j]);
		printf("%s\n", a[j]);//打印
		m = n / k;//重新计算每排人数
	}
	return 0;
}
*/