#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
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
	if (a.height > b.height)
		return a.height > b.height;
	else
		if (a.height < b.height)
			return a.height < b.height;
		else
			return strcmp(a.name, b.name) > 0;
}

int main() {

	int n = 0, k = 0, i = 0, j = 0, m = 0, left = 0, right = 0;
	vector<stu> v;
	stu temp;
	cin >> n >> k;
	for (i = 0; i < n; i++)
	{
		scanf("%s%d", temp.name, &temp.height);
		v.push_back(temp);
	}
	sort(v.begin(), v.end(), cmp);
	for (i = 0; i < n; i++)
		printf("%s%d\n", v[i].name, v[i].height);
	return 0;
}
