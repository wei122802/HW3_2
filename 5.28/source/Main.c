#include <stdio.h>
#include <stdlib.h>

int main() {
	char alphabet;

	while (1)
	{
		printf("Enter an alphabet:");
		scanf_s("%c", &alphabet);
		if (alphabet >= 'A' && alphabet <= 'Z') 
			printf_s("%c\n", alphabet + 32);
					//ASCII code ��A�O65 a�O97 �ҥH+32&-32
		else if (alphabet >= 'a' && alphabet <= 'z')
			printf_s("%c\n", alphabet - 32);
		
	}
	system("pause");
	return 0;
}