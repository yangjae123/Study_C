#include <stdio.h>

int main(void)
{
	int x1, x2;
	int y1, y2;

	printf("�� ����� x,y :");
	scanf_s("%d %d", &x1, &y1);

	printf("�� �ϴ��� x,y :");
	scanf_s("%d %d", &x2, &y2);

	int result = (x2 - x1) * (y2 - y1);

	printf("���簢���� ���� : %d", result);
	return 0;
}
