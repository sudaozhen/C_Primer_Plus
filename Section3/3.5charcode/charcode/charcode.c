// charcode.c -显示字符的代码编号
#include<stdio.h>

int main(void)
{
	char ch = 0;

	printf("Please enter a character.\n");
	scanf_s("%c", &ch);  //用户输入字符
	printf("The code for %c is %d.\n", ch, ch);

	getchar();
	printf("\n");
	getchar();
	return 0;
}