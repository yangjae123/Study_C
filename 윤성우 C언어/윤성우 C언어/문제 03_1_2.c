#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("�Է� ���� ������ ���� :");
	scanf("%d %d %d", &num1, &num2, &num3);

	int result = num1 * num2 + num3;
	printf("�Է� ���� ������ ������ ����� : %d", result);
	return 0;

}