#include <stdio.h>

int main01()
{
	char c;//定义一个char类型的变量
	c = 'a';
	printf("%c\n", c);

	//c = 4;//c等于一个整数4
	//c = '4';//c等于一个字符4
	c = 'D';
	c = c + 32;//将大写字母转化为小写字母的算法

	printf("%c\n", c);//52就是‘4’这个字符的ASCII码

	c = '9';
	//c = c - 48;
	c = c - '0';//将字符转化为整数的算法
	printf("%d\n", c);
	return 0;
}

int main()
{
	char c = '\a';
	c = 'a';
	printf("%c", c);

	c = '\b';
	printf("%c", c);

	c = 'b';
	printf("%c", c);

	c = '\n';
	printf("%c", c);

	c = 'a';
	printf("%c", c);

	c = 'b';
	printf("%c", c);

	c = '\r';
	printf("%c", c);

	c = 'c';
	printf("%c", c);

	//c = '\r';
	//printf("%c", c);

	printf("\n");
	c = 'a';
	printf("%c", c);
	c = '\t';
	printf("%c", c);
	c = 'b';
	printf("%c", c);

	c = '\'';
	printf("%c", c);

	char a = 0;//定义一个有符号的char
	unsigned char b = 0;//定义一个无符号的char
	b = b - 1;

	a = 127;
	a = a + 5;
	printf("%d", a);
	return 0;
}