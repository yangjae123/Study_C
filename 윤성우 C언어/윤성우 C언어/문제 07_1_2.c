#include <stdio.h>

int main(void)
{
	int num;
	int is=1;
	printf("�Է¹��� ���");
	scanf("%d", &num);

	while (is<=num)
	{
		printf("%d ",is*3);
		is++;
	}
	return 0;


}