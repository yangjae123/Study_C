#include <stdio.h>

int main(void)
{
	int num;
	int is = 0;
	printf("양의 정수 :");
	scanf("%d", &num);
	printf("입력받은 양의 정수 %d만큼 반복 \n", num);

	while (is < num)
	{
		printf("Hello world! \n");
		is++;
	}
	return 0;

}