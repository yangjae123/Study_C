#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("������ ���� :");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	int result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("������ ��� : %d", result);
	return 0;
}