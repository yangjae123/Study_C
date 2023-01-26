#include <stdio.h>

int main(void)
{
	int num=0;
	int cun;
	int is = 0;
	double total=0;
	printf("몇 개의 정수를 입력할 것인가 ? ");
	scanf("%d", &cun);

	while (is < cun)
	{
		printf("정수의 값 :");
		scanf("%d",&num);
		total += num;
		is++;
	}
	printf("평균 값 : %lf", total / cun);
	return 0;

}