//skiptwo.c -- ���������е�ǰ��������
#include <stdio.h>
int main(void)
{
	int n;

	printf("Please enter three integers:\n");
	scanf_s("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);

	getchar();
	getchar();
	return 0;
}