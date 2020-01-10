/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	int n = 0, m = 0, t = 0, i = 0, j = 0, count_m = 0, out[1002]; char t_c;
	//  一道题的满分值   选项个数		  
	int full_score[102], options_num[102];
	char full_options[102][6],stu_options[102][6];//正确答案和学生答案
	int count_wrong[102], max = -1;//错误次数
	
	cin >> n >> m;//学生人数n 多选题个数m
	//输入正确答案
	for (i = 0; i < m; i++) {
		cin >> full_score[i] >> options_num[i] >> t;
		for (j = 0; j < t; j++) 
			scanf("%c%c",&t_c, &full_options[i][j]);//正确选项拼接进入字符串
		full_options[i][j] = '\0';//添加结尾
		//printf("\n%s\n", full_options[i]);
	}
	for (i = 0; i < m; i++)count_wrong[i] = 0;
	//输入学生答案
	scanf("%c", &t_c);
	for (i = 0; i < n; i++) {
		//输入一行
		count_m = 0; out[i] = 0;//初始化
		while (true) {
			scanf("%c", &t_c);
			if (t_c == '\n')break;
			if (t_c == '(') {
				cin >> t;//选项个数
				for (j = 0; j < t; j++) 
					scanf("%c%c",&t_c, &stu_options[count_m][j]);//正确选项拼接进入字符串
				stu_options[count_m][j] = '\0';//end
				//printf("\n%s\n", stu_options[count_m]);
				if (strcmp(stu_options[count_m], full_options[count_m]) == 0) {
					//答对
					out[i] += full_score[count_m];
				}
				else
				{
					//答错
					count_wrong[count_m] += 1;
					if (count_wrong[count_m] > max) max = count_wrong[count_m];
				}
				count_m++;//计数下一题
			}
		}
	}
	for (i = 0; i < n; i++)printf("%d\n", out[i]);
	if (max == 0 || max == -1)printf("Too simple");
	else
	{
		printf("%d", max);
		for (i = 0; i < m; i++)
			if (count_wrong[i] == max)printf(" %d", i + 1);
	}
	return 0;
}
*/