#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("�ΰ��� ���� �Է� :");
	scanf_s("%d %d", &num1, &num2);

	int result1 = num1 - num2;
	int result2 = num1 + num2;

	printf("�� ���� �E�� : %d \n", result1);
	printf("�� ���� ���� : %d \n", result2);
	return 0;
}