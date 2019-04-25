//do_while.c -- 出口条件循环
#include <stdio.h>
int main(void)
{
	const int secret_cote = 13;
	int code_entered;

	do
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number: ");
		scanf_s("%d", &code_entered);
	} while (code_entered != secret_cote);
	printf("Congratulations! You are cured!\n");
	
	getchar();
	getchar();
	return 0;
}