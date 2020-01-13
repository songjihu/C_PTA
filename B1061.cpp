/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	int m = 0, n = 0, t = 0, i = 0, j = 0, right_answer[102], full_score[102], out[102];
	//学生人数n 题量m
	for (i = 0; i < 102; i++)out[i] = 0;
	cin >> n >> m;
	for (i = 0; i < m; i++)cin >> full_score[i];
	for (i = 0; i < m; i++)cin >> right_answer[i];
	for (i = 0; i < n; i++) 
		for (j = 0; j < m; j++) {
			cin >> t;
			if (t == right_answer[j])out[i] += full_score[j];
		}
	for (i = 0; i < n; i++)cout << out[i] << endl;
	return 0;
}
*/