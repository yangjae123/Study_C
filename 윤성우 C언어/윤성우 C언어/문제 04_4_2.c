#include <stdio.h>

int main(void)
{
	int num1 = 3;	//0000 0011
	int result1 = num1 << 3;
		result1 = result1 >> 2;

	printf("3 X 8 / 4 = %d", result1);
	return 0;

}