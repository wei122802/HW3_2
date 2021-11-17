#include <stdio.h>
#include <stdlib.h>

int main() {
	int base, ex;
	scanf_s("%d %d", &base, &ex);
	printf("power(%d,%d)= %d\n", base, ex,power(base,ex));

	system("pause");
	return 0;
}

int power(int x, int y) {
	int pow;
	if (y >= 1) {
		pow = x * power(x, y - 1);
		return pow;
	}
	else return 1;
	
}