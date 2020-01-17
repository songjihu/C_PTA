#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
#include <map>
using namespace std;
//²Î¿¼£ºhttps://blog.csdn.net/qq_38263123/article/details/81161052
int main() {

	map<int, int >t_m;
	int m, n, t, i, j, flag = 0, out_x = 0, out_y = 0;
	int input[1004][1004], out_color = 0, tol;
	for (i = 0; i < 1004; i++)for (j = 0; j < 1004; j++)input[i][j] = 0;
	cin >> m >> n >> tol;
	for (i = 1; i < n + 1; i++) {
		for (j = 1; j < m + 1; j++) {
			cin >> input[i][j];
			t_m[input[i][j]]++;
		}
	}
	for (i = 1; i < n+1; i++) {
		for (j = 1; j < m+1; j++) {
			if (t_m[input[i][j]] > 1)continue;
			if (abs(input[i][j] - input[i - 1][j]) <= tol)continue;
			if (abs(input[i][j] - input[i + 1][j]) <= tol)continue;
			if (abs(input[i][j] - input[i][j - 1]) <= tol)continue;
			if (abs(input[i][j] - input[i][j + 1]) <= tol)continue;
			if (abs(input[i][j] - input[i - 1][j - 1]) <= tol)continue;
			if (abs(input[i][j] - input[i + 1][j + 1]) <= tol)continue;
			if (abs(input[i][j] - input[i + 1][j - 1]) <= tol)continue;
			if (abs(input[i][j] - input[i - 1][j + 1]) <= tol)continue;
			if (flag == 0) { flag = 1; out_x = i; out_y = j; out_color = input[i][j];}
			else if (flag == 1) { flag = 2; break; }
		}
	}
	
	
	
	if (flag == 0)cout << "Not Exist" << endl;
	if (flag == 1)printf("(%d, %d): %d\n", out_y, out_x, out_color);
	if (flag == 2)cout << "Not Unique" << endl;

	return 0;
}
