/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	int k = 0, t = 0, i, j;//i>=j
	int a[10002], b[10001][101], m, n, des = 0;//des��ʾij�ƶ�������������0123
	for (i = 0; i < 10001; i++)
		for (j = 0; j < 101; j++)b[i][j] = -1;
	scanf("%d", &k); t = sqrt(k);
	for (i = 0; i < k; i++)scanf("%d", &a[i]);
	sort(a, a + k);
	for (n = t; n > 0; n--) if (k % n == 0) { m = k / n; break; }//�������� m n
	//���ñ߽�
	for (i = 0; i < n + 2; i++) { b[0][i] = -2; b[m + 1][i] = -2; }
	for (i = 1; i < m + 1; i++) { b[i][0] = -2; b[i][n + 1] = -2; }
	i = 1; j = 1; t = k - 1;//��ʼ��
	while (t != -1)
	{
		b[i][j] = a[t]; t--;
		switch (des) {
		case 0:if (b[i][j + 1] == -1)j++;//�ƶ���δ���߽�
			  else { i++; des = 1; }//�ƶ���ﵽ�߽�
			  break;
		case 1:if (b[i + 1][j] == -1)i++;
			  else { j--; des = 2; } break;
		case 2:if (b[i][j - 1] == -1)j--;
			  else { i--; des = 3; } break;
		case 3:if (b[i - 1][j] == -1)i--;
			  else { j++; des = 0; } break;
		}
	}
	for (i = 1; i < m + 1; i++) {//����������b
		printf("%d", b[i][1]);
		for (j = 2; j < n + 1; j++) printf(" %d", b[i][j]);
		printf("\n");
	}
	return 0;
}
*/