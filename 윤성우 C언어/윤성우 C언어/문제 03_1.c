#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("두개의 정수 입력 :");
	scanf_s("%d %d", &num1, &num2);

	int result1 = num1 - num2;
	int result2 = num1 + num2;

	printf("두 수의 뺼셈 : %d \n", result1);
	printf("두 수의 뎃셈 : %d \n", result2);
	return 0;
}