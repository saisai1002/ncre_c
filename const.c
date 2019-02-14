#include <stdio.h>
//常量的讲解
#define PI 3.14
int main01(void)
{
	//定义一个常量， const修饰的变量成为常量
	//const float pi = 3.14;
	//pi = 3;
	printf("%f\n", PI);
	return 0;
}

int main(void)
{
	//auto可以省略
	auto float a  = 3.14;
	printf("%f\n", a);
	return 0;
}






