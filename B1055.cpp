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

int cmp(struct stu a, struct stu b) {  //�������������
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
	sort(v.begin(), v.end(), cmp);//�Ӹߵ�������
	m = n / k + n % k;//���һ������m
	char a[10002][10];
	for (i = 0; i < k; i++) {
		//�����һ�ſ�ʼ��ÿ�δ�ӡһ��
		flag = 1; point = m / 2 + 1;//��ʼ���õ�λ�ã���Ϊ�м�λ��
		for (j = 0; j < m; j++) {
			//����m�� flag��ʾ�ƶ���ʽ
			strcpy(a[point - 1], v[count].name);
			flag % 2 == 1 ? point -= flag : point += flag;
			flag++; count++;
		}
		for (j = 0; j < m - 1; j++) printf("%s ", a[j]);
		printf("%s\n", a[j]);//��ӡ
		m = n / k;//���¼���ÿ������
	}
	return 0;
}
*/