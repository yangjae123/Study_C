#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("두개의 정수:");
	scanf_s("%d %d", &num1, &num2);

	int result1 = num1 / num2;
	int result2 = num1 % num2;

	printf("목: %d", result1);
	printf("나머지: %d", result2);
	return 0;

}