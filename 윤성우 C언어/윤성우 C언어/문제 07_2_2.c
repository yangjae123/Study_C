#include <stdio.h>

int main(void)
{
	int cun=0,is=0;


	while (cun<5)
	{
		
		is = 0;
		while (is<cun)
		{
			printf("o");
	        is++;
		}
		printf("* \n");
		cun++;

	}
	return 0;
}