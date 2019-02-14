#include <stdio.h>
//float类型
int main01(void)
{
	float pi = 3.1485;
	//%f是一个占位符，表示输出一个浮点型数据
	//浮点型默认保留6位小数
	printf("%.2f\n", pi); //保留两位有效数字
}

int main02(void)
{
	//定义单精度类型
	float pi;
	scanf("%f",&pi);

	printf("%.4f\n",pi);
	return 0;
}

int main03(void)
{
	double a = 123.456;
	printf("%lf\n",a);
	return 0;
}



int main(void)
{
	float pi = 3.14159;
	//求出圆的面积和周长
	//面积 pi*r*r
	//周长 2*pi*r
	float r;
	scanf("%f",&r);
	float s = pi * r * r;
	float l = 2 * pi * r;
	printf("面积为：%.2f\n",s);
	printf("周长为：%.2f\n", l);
	return 0;
}





