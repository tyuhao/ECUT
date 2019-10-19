#include <stdio.h>
int power(int x,int n)
{
	int i,power=1;
	for(i=1;i<=n;i++)
	power*=x;
	return power;
}
int main()
{
	int x,n;
	scanf("%d%d",&x,&n);
	printf("%d^%d=%d\n",x,n,power(x,n));
}