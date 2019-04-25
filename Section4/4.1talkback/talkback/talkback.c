//talkback.c --演示与用户交互

#include <stdio.h>
#include <string.h>   //提供string()函数的原型

#define DENSITY 62.4   //人体密度 (单位：磅/立方英尺)

int main()
{
	float weight, volume;
	int size, letters;
	char name[40];     //name是一个可以容纳40个字符的数组

	printf("Hi! What's your first name?\n");
	scanf_s("%s", name, 40);
	printf("%s, what's your weight in pounds?\n",name);
	scanf_s("%f", &weight,2);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);

	getchar();
	getchar();
	return 0;

}

