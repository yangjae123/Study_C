#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("입력 받은 세개의 정수 :");
	scanf("%d %d %d", &num1, &num2, &num3);

	int result = num1 * num2 + num3;
	printf("입력 받은 세개의 정수의 결과는 : %d", result);
	return 0;

}