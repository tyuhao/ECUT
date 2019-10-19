#include <stdio.h>
void swap(int *p1, int *p2)
{   
	int p;
    p=*p1;
    *p1=*p2;
    *p2=p;
}
main()
{
	int n,m,r,p;
	int *p1,*p2;
	printf("请输入两个正整数n,m:");
	scanf("%d%d",&n,&m);
	p1=&n;
	p2=&m;
	p=n*m;
	swap(p1,p2);
	while(m!=0)
	{
		r=n%m;
		n=m;
		m=r;
	}
	printf("它们的最大公约数为：%d\n",n);
	printf("它们的最小公倍数为：%d\n",p/n);
}