/*函数指针编程：设计一个函数process，在调用它的时候，每次实现不同的功能。
输入a和b两个数，
第一次调用process时返回a和b中的最大数，
第二次调用process时返回a和b中的最小数，
第三次调用process时求a与b之和，
第四次调用process时返回a与b之差。*/
#include <stdio.h>
int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a<b?a:b;
}
int sum(int a,int b)
{
	return a+b;
}
int cut(int a,int b)
{
	return a-b;
}
void process(int x,int y,int(* fun)(int, int))
{
	int result;
	result = (*fun)(x,y);
	printf("%d\n",result);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	process(a,b,max);
	process(a,b,min);
	process(a,b,sum);
	process(a,b,cut);
}