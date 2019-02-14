#include <stdio.h>
int main(void)
{
	//定义变量
	//数据类型 变量名（标识符）
	//标识符命名要见名知意
	int weight = 5;
	int price = 2;
	int sum = weight * price;
	//占位符  %d是输出一个整型数据
	printf("总的价钱为:%d\n",sum);
	return 0;
	
}
