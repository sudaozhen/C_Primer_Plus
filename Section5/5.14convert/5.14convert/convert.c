//convert.c -- �Զ�����ת��
#include <stdio.h>
int main(void)
{
	char ch;
	int i;
	float fl;

	fl = i = ch = 'C';      //��9��
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);//��10��
	ch = ch + 1;
	i = fl + 2 * ch;
	fl = 2.0 * ch + 1;
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
	ch = 1107;
	printf("Now ch = %c\n", ch);
	ch = 80.89;
	printf("Now ch = %c\n", ch);

	getchar();
	return 0;

}