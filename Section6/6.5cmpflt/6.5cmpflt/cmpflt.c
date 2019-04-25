//cmpflt.c -- 浮点数比较
#include <math.h>
#include <stdio.h>
int main(void)
{
	const double ANSWER = 3.14159;
	double response;

	printf("What is value of pi?\n");
	scanf_s("%lf", &response);
	while (fabs(response - ANSWER) > 0.0001)
	{
		printf("Try anain!\n");
		scanf_s("%lf", &response);
	}
	printf("Close enough!\n");

	getchar();
	getchar();
	return 0;
}