#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main (){
	unsigned int a;
	scanf_s("%u", &a);
	printf("The NO.%u is %llu\n", a, fibonacci(a));
	printf("The largest is:%llu\n",  fibonacci(UINT_MAX));
	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int n) {
	unsigned long long int ans[3];
	ans[0] = 0; ans[1] = 1;
		for (int i = 2; i < n ; i++) {
			ans[2] = ans[1] + ans[0];
			ans[0] = ans[1];
			ans[1] = ans[2];
			if (ans[1] < ans[0]) break;
		}

	return ans[2];
}