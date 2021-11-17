#include <stdio.h>
#include <stdlib.h>

void Hanoi(int n, char x, char y, char z);

int main() {

	Hanoi(3, '1', '2', '3');
	system("pause");
}

void Hanoi(int n, char x, char y, char z) {
	if (n == 1) {
		printf("%c------>%c\n", x, z);
		return;
	}
	Hanoi(n - 1, x, z, y);
	printf("%c------>%c\n", x, z);
	Hanoi(n - 1, y, x, z);
	return;
}