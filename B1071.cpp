/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
#include <map>
using namespace std;

int main() {

	int n1[102], n2[102], b[102], t[102], i, j, s, k;
	cin >> s >> k;//s总筹码数，k游戏次数
	for (i = 0; i < k; i++) cin >> n1[i] >> b[i] >> t[i] >> n2[i];
	for (i = 0; i < k; i++) {
		if (t[i] > s) { printf("Not enough tokens.  Total = %d.\n", s); continue; }
		if (b[i] == 0) {//赌小
			if (n1[i] > n2[i]) { s += t[i]; printf("Win %d!  Total = %d.\n", t[i], s); }
			else { s -= t[i]; printf("Lose %d.  Total = %d.\n", t[i], s); if (s <= 0) { printf("Game Over.\n"); return 0; }}
		}
		else{//赌大
			if (n1[i] < n2[i]) { s += t[i]; printf("Win %d!  Total = %d.\n", t[i], s); }
			else { s -= t[i]; printf("Lose %d.  Total = %d.\n", t[i], s); if (s <= 0) { printf("Game Over.\n"); return 0; } }
		}
	}
	return 0;
}
*/