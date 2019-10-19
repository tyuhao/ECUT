//编写一个函数，计算两个整数m和n的最大公约数和最小公倍数。m和n在主函数中输入。
#include <stdio.h>
void swap(int m,int n)
{
	int temp;
	if (m>n)
	{
		temp=m;
		n=m;
		m=temp;
	}
}
int maxdivisor(int m,int n)
{
	int r;
	while(n%m!=0)
	{
		r=n%m;
		n=m;
		m=r;
	}
	return m;
}
int minmultiple(int m,int n)
{
	int mp;
	mp=m*n;
	return (mp/maxdivisor(m,n));
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	swap(m,n);
	printf("maxdivisor is %d\nminmultile is %d",maxdivisor(m,n),minmultiple(m,n));
}