#include <stdio.h>

int main(void)
{
	int total = 0, num = 0;

	printf("���� �Է�(0 to quit):");
	scanf("%d", &num);

	while (num != 0)
	{
		total += num;
		printf("���� �Է�(0 to quit):");
		scanf("%d", &num);
		


	}

	printf("�հ�: %d \n", total);
	return 0;

}