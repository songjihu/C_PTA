/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
#include <map>
using namespace std;

int main() {

	int m, n, s, t, i, j, flag = 0, count, inflag;
	char input[1002][22], out[1002][22];
	cin >> m >> n >> s;//ת����������С���������н�������Լ���һλ�н��ߵ���ţ���Ŵ� 1 ��ʼ��
	count = n;
	for (i = 0; i < m; i++) scanf("%s", input[i]);
	for (i = s - 1; i < m; i++) {
		if (count == n) {
			inflag = 0;
			for (j = 0; j < flag; j++) if (strcmp(input[i], out[j]) == 0) { inflag = 1; break; }
			if (inflag == 0) {//û�еù���
				strcpy(out[flag], input[i]);
				flag++;
				count = 1;
			}
		}
		else count++;
	}

	if (flag > 0) for (i = 0; i < flag; i++) printf("%s\n", out[i]);
	else cout << "Keep going..." << endl;
	return 0;
}
*/