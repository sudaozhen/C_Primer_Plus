//power.c -- ��������������
#include <stdio.h>
double power(double n, int p);    //ANSI����ԭ��
int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the positive integer power");
	printf(" to which\nthe number will be rasied. Enter q");
	printf(" to quit.\n");
	while (scanf_s("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);   //��������
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of number or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	return 0;
	getchar();
}

double power(double n, int p)  //��������
{
	double pow = 1;
	int i;

	for (i = 1; i <= p; i++)
		pow *= n;

	return pow;               //����pow��ֵ
}
