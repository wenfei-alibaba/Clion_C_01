#include <stdio.h>

int main01()
{
	char c;//����һ��char���͵ı���
	c = 'a';
	printf("%c\n", c);

	//c = 4;//c����һ������4
	//c = '4';//c����һ���ַ�4
	c = 'D';
	c = c + 32;//����д��ĸת��ΪСд��ĸ���㷨

	printf("%c\n", c);//52���ǡ�4������ַ���ASCII��

	c = '9';
	//c = c - 48;
	c = c - '0';//���ַ�ת��Ϊ�������㷨
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

	char a = 0;//����һ���з��ŵ�char
	unsigned char b = 0;//����һ���޷��ŵ�char
	b = b - 1;

	a = 127;
	a = a + 5;
	printf("%d", a);
	return 0;
}