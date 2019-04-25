//input.c -- 合适使用&
#include <stdio.h>
int main(void)
{
	int age;       //变量
	float assets;  //变量
	char pet[30];  //字符数组，用于储存字符串

	printf("Enter your age, assets, and favourite pet.\n");
	scanf_s("%d %f", &age, &assets);     //这里要使用&
	scanf_s("%s", pet,30);              //字符数组不使用&
	printf("%d $%.2f %s\n", age, assets, pet);

	getchar();
	getchar();
	return 0;
}