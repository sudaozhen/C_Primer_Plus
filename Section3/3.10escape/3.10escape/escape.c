//escape.c -- 使用转义序列
//#define_CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float salary;

	printf("\aEnter your desired monthly salary:"); /*1*/
	printf(" $_______\b\b\b\b\b\b\b");             /*2*/
	scanf_s("%f", &salary,2);
	printf("\n\t$%.2f a month is $%.2f a year.", salary,
		salary * 12.0);                          /*3*/
	printf("\rGee!\n");                          /*4*/
	
	getchar();
	getchar();
	//pause();
	return 0;
}