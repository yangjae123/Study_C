#include <stdio.h>

int main(void)
{
	int x1, x2;
	int y1, y2;

	printf("좌 상단의 x,y :");
	scanf_s("%d %d", &x1, &y1);

	printf("우 하단의 x,y :");
	scanf_s("%d %d", &x2, &y2);

	int result = (x2 - x1) * (y2 - y1);

	printf("직사각형의 넓이 : %d", result);
	return 0;
}
