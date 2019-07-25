#include <stdio.h>
#include <stdlib.h>

struct student
{
	int num;
	char name[32];
	float score;
}stu;

int fun(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i] && s2[i] != '\0')
		i++;
	return (s1[i] == '\0' && s2[i] == '\0');
}


int main()
{
	//char a[] = "123456789", *p = a;
	//int i = 0;
	//while (*p)
	//{
	//	if (i % 2 == 0)
	//		*p = '!';
	//	i++; p++;
	//}
	//puts(a);//!2!4!6!8!

	//char str[] = "ABCDEFG";
	//char *p1, *p2;
	//p1 = "abcd";
	//p2 = "efgh";
	//strcpy(str + 1, p2 + 1);//Afgh
	//strcpy(str + 3, p1 + 3);//Afgd
	//printf("%s\n", str);//Afgd

	//unsigned int a = 0xFFFFFFF7;
	//unsigned char i = (unsigned char)a;
	//char *b = (char *)&a;
	//printf("%08x,%08x", i, *b);//%08x的意思是8位的十六进制的形式
	////000000f7 fffffff7

	//int j = 4;
	//int i = j;
	//for (; i <= 2 * j; i++)
	//{
	//	switch (i / j)
	//	{
	//	case 0:
	//	case 1:
	//		printf("*");
	//		break;
	//	case 2:
	//		printf("#");
	//	}
	//}//****#

	int x = 1, y = 012;
	printf("%d", y*x++);
	

	system("pause");
	return 0;
}