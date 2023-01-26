#include <stdio.h>

int main(void)
{
	int num;
	int is = 9;

	printf("입력받은 양수 :");
	scanf("%d", &num);

	while (is>0)
	{
		printf("%d \n", is * num);
		is--;

	}
	return 0;
}