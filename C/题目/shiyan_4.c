#include<stdio.h>
void lovechina()
{
	printf("I Love China!\n");
}

int isnum(char n)
{
	if (n >= '0' && n <= '9')
		return 1;
	else
		return 0;
}

int mpower(int m,int n)
{
	int sum=1;
	for (int i = 0; i < n; ++i)
	{
		sum*=m;
	}
	return sum;
}

void up(int n)
{
	int i,j;
	for (i = 1; i<=n; i++)
	{
		for (j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=(2*i-1);j++)
		printf("*");
	printf("\n");
	}
}
void down(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(j=1;j<2*(n-i);j++)
			printf("*");
		printf("\n");
	}
}

int njc(int n)
{
	int jc=1;
	for (int i=1;i<=n;i++)
		jc*=i;
	return jc;
}

int jcsum(int n)
{
	int mjc=1,sum=0;
	for (int i=1;i<=n;i++)
	{
		mjc*=i;
		sum+=mjc;
	}
	return sum;
}

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
	//lovechina();

	/*char n;
	n=getchar();
	if(1==isnum(n))
		printf("Yes!\n");
	else
		printf("No!\n");*/

	/*int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",mpower(m,n));*/

	/*int n;
	scanf("%d",&n);
	up(n);
	down(n);*/

	/*int n;
	scanf("%d",&n);
	printf("n!=%d\njcsum=%d\n",njc(n),jcsum(n));*/

	int n;
	scanf("%d",&n);
	printf("%d\n",fibo(n) );

}