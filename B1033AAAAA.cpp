/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {

	int n = 0;
	int i = 0, j = 0, flag = 0, plus = 0;
	char a[100002], b[100002], c[100002];
	cin.getline(a, 100002);//��һ�п���Ϊ��
	cin.getline(b, 100002);
	//�ȼ���д���Ƿ���
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] == '+') {
			plus = 1;
			break;
		}
	}

	for (i = 0; b[i] != '\0'; i++) {
		flag = 0;//�Ƿ񻵵�
		for (j = 0; a[j] != '\0'; j++) {
			if (b[i] == a[j]) {
				//���ӡ��д��ĸ���������˼�����
				flag = 1; break;
			}
			if (b[i] >= 'a' && b[i] <= 'z' && b[i] == a[j] + 32) {
				//���ӡСд��ĸ���˼�����
				flag = 1; break;
			}
			if (b[i] >= 'A' && b[i] <= 'Z' && plus == 1) {
				//���ӡ��д��ĸ�Ҵ˼�û�л��������ϵ�������
				flag = 1; break;
			}
		}
		if (flag == 0) {
			printf("%c", b[i]);
		}
	}
	printf("\n");
	return 0;
}
*/