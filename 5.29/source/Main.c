#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	printf("Enter two integers:");
	scanf_s("%d %d", &a, &b);
	printf("The least common multiple:%d\n",LCM(a,b));

	system("pause");
	return 0;
}

int LCM(int x, int y) {
	int lcm;
		if (x > y) {
			if (x % y == 0) lcm = x;
			else lcm = x * y;
		}
		else {
			if (y % x == 0) lcm = y;
			else lcm = x * y;
		}

		return lcm;
}