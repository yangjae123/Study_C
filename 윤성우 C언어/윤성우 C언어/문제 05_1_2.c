#include <stdio.h>

int main(void)
{
	double num1, num2;
	printf("두 개의 실수 :");
	scanf_s("%lf %lf", &num1, &num2);

	printf("%f + %f = %f \n", num1, num2, num1 + num2);
	return 0;
}