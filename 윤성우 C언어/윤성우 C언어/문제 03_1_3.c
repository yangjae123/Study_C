#include <stdio.h>

int main(void)
{
	int num;
	printf("�ϳ��� ���� :");
	scanf_s("%d", &num);

	int result = num * num;
	printf("������ ������ ��� : %d", result);
	return 0;

}