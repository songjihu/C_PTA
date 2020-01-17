/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	int m, n, a, b, rp, t, i, j, input[502][502];
	for (i = 0; i < 502; i++)for (j = 0; j < 502; j++)input[i][j] = -1;
	cin >> m >> n >> a >> b >> rp;
	for(i=0;i<m;i++)
		for (j = 0; j < n; j++) {
			cin >> input[i][j];
		}
	for (i = 0; i < m; i++)
	{
		input[i][0] >= a && input[i][0] <= b ? printf("%03d", rp) : printf("%03d", input[i][0]);
		for (j = 1; j < n; j++)
			input[i][j] >= a && input[i][j] <= b ? printf(" %03d", rp) : printf(" %03d", input[i][j]);
		printf("\n");
	}		
	return 0;
}
*/