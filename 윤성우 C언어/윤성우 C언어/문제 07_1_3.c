#include <stdio.h>

int main(void)
{
	int num;
	int total = 0;

	printf("양의 정수 :");
	scanf("%d", &num);

	while (num != 0)
	{
		total += num;
		printf("양의 정수 :");
		scanf("%d", &num);
	}

	printf("정수의 합은 : %d \n", total);
	return 0;

}