#include <stdio.h>
//整型介绍
int main01(void)
{
	//定义变量 并赋值
	int a = 0;
	//通过键盘输入值赋给变量
	scanf("%d",&a);
	//打印出对应的值
	printf("十进制：%d\n",a);
	printf("八进制：%o\n",a);
	printf("十六进制：%x\n",a);
	printf("十六进制：%X\n",a);

}



int main02(void)
{
	//无符号的整型数据
	unsigned int a = 10;
	//有符号的整型数据
	signed int b = 30;
	printf("%u\n", a);
	printf("%d\n", b);	
}



int main(void)
{
	//短整型
	short a = 10;
	//长整型
	long b = 20;
	//长长整型
	long long c = 30;
	printf("短整型：%hd\n",a);
	printf("长整型：%ld\n", b);
	printf("长长整型：%lld\n", c);
}






