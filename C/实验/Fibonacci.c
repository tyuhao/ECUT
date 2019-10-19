#include <stdio.h>
int fibo(int n)
{
	int i,a=1,b=1,c;
	if(n==1||n==0)
		c=1;
	else
	{
		for(i=3;i<=n;i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
	}
		return c;
}
main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",fibo(n));
}