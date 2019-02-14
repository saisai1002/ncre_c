#include <stdio.h>
//char类型讲解
int main01(void)
{
	//定义字符变量
	char ch = 'a';
	//%c是一个占位符，输出一个字符型变量
	printf("%c\n",ch);
	return 0;
}


int main(void)
{
	char ch;
	scanf("%c",&ch);
	//char类型可以和整数进行运算操作
	ch = ch - 32;
	printf("%c\n",ch);
}












