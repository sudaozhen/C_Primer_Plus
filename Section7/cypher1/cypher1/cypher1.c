//cypher1.c -- �������룬�ո񲻱�
#include <stdio.h>
#define SPACE ' '     //SPACE��ʾ������-�ո�-������
int main(void)
{
	char ch;
	
	ch = getchar();     //��ȡһ���ַ�
	while (ch != '\n')   //��һ��ĩ����ʱ
	{
		if (ch == SPACE)  //���¿ո� 
			putchar(ch);   //���ַ�����
		else
			putchar(ch + 1);    //�ı������ַ�
		ch = getchar();         //��ȡ��һ���ַ�
	}
	putchar(ch);        //��ӡ�����ַ�

	getchar();
	return 0;
}