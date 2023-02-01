#include <stdio.h>

int main(void)
{
	int num = 0;
	int total = 1;
	printf("n의 정수는 : ");
	scanf("%d", &num);

	for (int is = 1; is <= num; is++)
	{
		total *= is;

	}

	printf(" %d의 계승 %d! : %d", num, num, total);
	return 0;
}