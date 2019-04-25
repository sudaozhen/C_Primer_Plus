//while2.c -- 注意分号的位置
#include <stdio.h>
int main(void)
{
	int n = 0;

	while (n++ < 3);       //第7行
		printf("n is %d\n", n);//第8行
	printf("That's all this program does.\n");

	getchar();
	return 0;
}