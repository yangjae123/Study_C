#include <stdio.h>

int main(void)
{
	int num;
	printf("하나의 정수 :");
	scanf_s("%d", &num);

	int result = num * num;
	printf("정수의 제곱의 결과 : %d", result);
	return 0;

}