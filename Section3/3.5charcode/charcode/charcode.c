// charcode.c -��ʾ�ַ��Ĵ�����
#include<stdio.h>

int main(void)
{
	char ch = 0;

	printf("Please enter a character.\n");
	scanf_s("%c", &ch);  //�û������ַ�
	printf("The code for %c is %d.\n", ch, ch);

	getchar();
	printf("\n");
	getchar();
	return 0;
}