#include <stdio.h>

int main(void)
{
	int total = 0, is = 0;


	do {
		total += is;
		is += 2;

	} while (is<=100);

	printf("0�̻� 100������ ���� �� ¦���� ���� : %d\n", total);
	return 0;

}