#include <stdio.h>

int main(void)
{	
	int is = 0, total = 0;;
	int num=0;

	while (is < 5)
	{
		printf("���� ���� :");
		scanf("%d", &num);

		while (num <= 1)
		{
			printf("���Է� �Ͻÿ�");
			scanf("%d", &num);

	    }

		total += num;
		is++;
	}
	printf("���� �� : %d", total);
	return 0;

}