/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	int n = 0, m = 0, t1 = 0, t2 = 0, i = 0, j = 0, a[100002], b[100002], s = 0;
	for (i = 0; i < 100002; i++) { a[i] = -1; b[i] = -1; }
	cin >> n;//已婚对数
	for (i = 0; i < n; i++) {
		cin >> t1 >> t2;
		a[t1] = t2;//在a数组中存储老婆/丈夫
		a[t2] = t1;
	}
	cin >> m;//参加派对总人数
	for (i = 0; i < m; i++) {
		cin >> t1;
		b[t1] = 1;//在b数组中存储是否参加派对
	}

	for (i = 0; i < 100002; i++)
		if (b[i] == 1 && a[i] == -1)s++;//no wife
		else //has wife but not had come
			if (b[i] == 1 && b[a[i]] == -1) s++;
	cout << s << endl;
	for(i = 0; i < 100002; i++){
		if (b[i] == 1 && a[i] == -1) {//no wife
			printf("%05d", i);
			i++;
			break;
		}
		else {//has wife but not had come
			if (b[i] == 1 && b[a[i]] == -1) {
				printf("%05d", i);
				i++;
				break;
			}
		}
	}
	for (;i < 100002; i++) 
		if (b[i] == 1 && a[i] == -1)printf(" %05d", i);//no wife
		else //has wife but not had come
			if (b[i] == 1 && b[a[i]] == -1) printf(" %05d", i);
	return 0;
}
*/