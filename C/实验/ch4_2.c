// 编写一个函数，用指针作为参数，分别得到双精度实型数据的整数部分和小数部分。
#include "stdio.h"
void fun(double x,int *i,double *j)
{
	*i = x;
	*j = x - *i;
}
int main()
{
	double x;
	int i;
	double j;
	printf("请输入一个小数：");
	scanf("%lf",&x);
	fun(x,&i,&j);
	printf("\n整数部分是 %d\n小数部分是 %lf\n",i,j);
}
