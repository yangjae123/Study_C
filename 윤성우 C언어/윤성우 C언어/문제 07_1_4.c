#include <stdio.h>

int main(void)
{
	int num;
	int is = 9;

	printf("�Է¹��� ��� :");
	scanf("%d", &num);

	while (is>0)
	{
		printf("%d \n", is * num);
		is--;

	}
	return 0;
}