#include <stdio.h>

int main(void)
{
	int num = 0;
	int total = 1;
	printf("n�� ������ : ");
	scanf("%d", &num);

	for (int is = 1; is <= num; is++)
	{
		total *= is;

	}

	printf(" %d�� ��� %d! : %d", num, num, total);
	return 0;
}