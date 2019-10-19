第一题
#include <stdio.h>
main( )
{
  int x=10,y=5,*px,*py;
  px=py;//py未初始化,可把第八行移至改行前
  px=&x;
  py=&y;
  printf("*px=%d,*py=%d\n",*px,*py);
}
第二题
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
第三题
#include <stdio.h>
main()
{
	int p,r,n,m,temp;
	printf("请输入两个正整数n,m");
	scanf("%d%d",&n,&m);
	p=n*m;
	if(n<m)
	{
		temp=n;
		n=m;
		m=temp;
	}
	while(m!=0)
	{
		r=n%m;
		n=m;
		m=r;
	}
	printf("它们的最大公约数为：%d\n",n);
	printf("他们的最小公倍数为：%d\n",p/n);
}
第四题
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