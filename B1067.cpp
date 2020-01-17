/*#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

void my_input(char a[]) {
	char t; int i;
	for (i = 0; i < 100; i++) {
		scanf("%c", &t);
		if (t == '\n')break;
		a[i] = t; 
	}
	a[i] = '\0';
	return;
}

int main() {

	int n, t, i, j;
	char str[22],input_str[100];
	scanf("%s", str); cin >> n;
	my_input(input_str);
	my_input(input_str);
	while (strcmp(input_str, "#") != 0) {
		if (strcmp(input_str, str) == 0) { 
			cout << "Welcome in" << endl; 
			break;
		}
		else {
			printf("Wrong password: %s\n", input_str);
			n--;
			if (n == 0) {
				cout << "Account locked" << endl;
				break;
			}
		}
		my_input(input_str);
	}
	return 0;
}
*/