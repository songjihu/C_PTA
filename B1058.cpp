#define _CRT_SECURE_NO_WARNINGS
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
	//初始化
	for (i = 0; i < 102; i++)for (j = 0; j < 6; j++) {
		full_options[i][j] = '\0'; stu_options[i][j] = '\0'; count_wrong[i] = 0;
	}
	cin >> n >> m;
	//输入正确答案
	for (i = 0; i < m; i++) {
		cin >> full_score[i] >> options_num[i] >> t;
		for (j = 0; j < t; j++)
			scanf("%c%c", &full_options[i][j],&t_c);//正确选项拼接进入字符串
	}
	//输入学生答案
	for (i = 0; i < n; i++) {
		//输入一行
		count_m = 0; out[i] = 0;//题号
		while (true) {
			scanf("%c", &t_c);
			if (t_c == '\n')break;
			if (t_c == '(') {
				cin >> t;
				for (j = 0; j < t; j++) 
					scanf("%c", &stu_options[count_m][j]);//正确选项拼接进入字符串
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
	return 0;
}
