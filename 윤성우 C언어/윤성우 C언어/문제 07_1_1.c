#include <stdio.h>

int main(void)
{
	int num;
	int is = 0;
	printf("���� ���� :");
	scanf("%d", &num);
	printf("�Է¹��� ���� ���� %d��ŭ �ݺ� \n", num);

	while (is < num)
	{
		printf("Hello world! \n");
		is++;
	}
	return 0;

}