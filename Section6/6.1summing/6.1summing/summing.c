//summing.c -- �����û�������������
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;     //��sum��ʼ��Ϊ0
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quite):");
	status = scanf_s("%ld", &num);
	while (status == 1)      //==����˼�ǡ����ڡ�
	{
		sum = sum + num;
		printf("Please enter next integer (q to quite):");
		status = scanf_s("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);

	getchar();
	getchar();
	getchar();
	getchar();
	return 0;
}