//floaterr.c -- ÑİÊ¾ÉáÈë´íÎó
#include <stdio.h>
int main(void)
{
	float a, b;

	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f \n", a);

	getchar();
	return 0;
}