#include <stdio.h>

int main(void)
{
	char ch;
	printf("알파벳 :");
	scanf_s("%c", &ch);

	printf("입력받은 알파벳의 아스키 코드 값 : %d", ch);
	return 0;
}