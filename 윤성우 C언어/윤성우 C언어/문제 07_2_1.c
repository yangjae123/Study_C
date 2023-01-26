#include <stdio.h>

int main(void)
{	
	int is = 0, total = 0;;
	int num=0;

	while (is < 5)
	{
		printf("양의 정수 :");
		scanf("%d", &num);

		while (num <= 1)
		{
			printf("재입력 하시오");
			scanf("%d", &num);

	    }

		total += num;
		is++;
	}
	printf("수의 합 : %d", total);
	return 0;

}