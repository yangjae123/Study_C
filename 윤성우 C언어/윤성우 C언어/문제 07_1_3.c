#include <stdio.h>

int main(void)
{
	int num;
	int total = 0;

	printf("���� ���� :");
	scanf("%d", &num);

	while (num != 0)
	{
		total += num;
		printf("���� ���� :");
		scanf("%d", &num);
	}

	printf("������ ���� : %d \n", total);
	return 0;

}