#include <stdio.h>

int main(void)
{
	int num;
	printf("정수 값 : ");
	scanf_s("%d", &num);

	num = ~num;
	num += 1;

	printf("출력 값 : %d",num );
	return 0;

}