#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	int n = 0, m = 0, t = 0, i = 0, j = 0, count_m = 0, out[1002]; char t_c;
	//  һ���������ֵ   ѡ�����		  
	int full_score[102], options_num[102];
	char full_options[102][6],stu_options[102][6];//��ȷ�𰸺�ѧ����
	int count_wrong[102], max = -1;//�������
	//��ʼ��
	for (i = 0; i < 102; i++)for (j = 0; j < 6; j++) {
		full_options[i][j] = '\0'; stu_options[i][j] = '\0'; count_wrong[i] = 0;
	}
	cin >> n >> m;
	//������ȷ��
	for (i = 0; i < m; i++) {
		cin >> full_score[i] >> options_num[i] >> t;
		for (j = 0; j < t; j++)
			scanf("%c%c", &full_options[i][j],&t_c);//��ȷѡ��ƴ�ӽ����ַ���
	}
	//����ѧ����
	for (i = 0; i < n; i++) {
		//����һ��
		count_m = 0; out[i] = 0;//���
		while (true) {
			scanf("%c", &t_c);
			if (t_c == '\n')break;
			if (t_c == '(') {
				cin >> t;
				for (j = 0; j < t; j++) 
					scanf("%c", &stu_options[count_m][j]);//��ȷѡ��ƴ�ӽ����ַ���
				if (strcmp(stu_options[count_m], full_options[count_m]) == 0) {
					//���
					out[i] += full_score[count_m];
				}
				else
				{
					//���
					count_wrong[count_m] += 1;
					if (count_wrong[count_m] > max) max = count_wrong[count_m];
				}
				count_m++;//������һ��
			}
		}
	}
	for (i = 0; i < n; i++)printf("%d\n", out[i]);
	return 0;
}
