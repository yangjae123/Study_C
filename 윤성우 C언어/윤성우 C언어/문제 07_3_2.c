#include <stdio.h>

int main(void)
{
	int total = 0, is = 0;


	do {
		total += is;
		is += 2;

	} while (is<=100);

	printf("0이상 100이하의 정수 중 짝수의 합은 : %d\n", total);
	return 0;

}