#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0;
	int is = 0, total = 0;
	printf("nuum1:");
	scanf("%d", &num1);
	printf("nuum2:");
	scanf("%d", &num2);

	for ( is=num1; is<=num2;is++)
	{
		total += is;
		
	}
	printf("%d 부터 %d 까지의 합 : %d", num1, num2, total);s
	return 0;

}