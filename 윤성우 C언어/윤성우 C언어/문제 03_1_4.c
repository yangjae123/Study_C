#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("�ΰ��� ����:");
	scanf_s("%d %d", &num1, &num2);

	int result1 = num1 / num2;
	int result2 = num1 % num2;

	printf("��: %d", result1);
	printf("������: %d", result2);
	return 0;

}