//input.c -- ����ʹ��&
#include <stdio.h>
int main(void)
{
	int age;       //����
	float assets;  //����
	char pet[30];  //�ַ����飬���ڴ����ַ���

	printf("Enter your age, assets, and favourite pet.\n");
	scanf_s("%d %f", &age, &assets);     //����Ҫʹ��&
	scanf_s("%s", pet,30);              //�ַ����鲻ʹ��&
	printf("%d $%.2f %s\n", age, assets, pet);

	getchar();
	getchar();
	return 0;
}