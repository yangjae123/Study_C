#include <stdio.h>

int main(void)
{
	int num;
	printf("���� �� : ");
	scanf_s("%d", &num);

	num = ~num;
	num += 1;

	printf("��� �� : %d",num );
	return 0;

}