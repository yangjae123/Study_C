#include <stdio.h>

int main(void)
{
	int num=0;
	int cun;
	int is = 0;
	double total=0;
	printf("�� ���� ������ �Է��� ���ΰ� ? ");
	scanf("%d", &cun);

	while (is < cun)
	{
		printf("������ �� :");
		scanf("%d",&num);
		total += num;
		is++;
	}
	printf("��� �� : %lf", total / cun);
	return 0;

}