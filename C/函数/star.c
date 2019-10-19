#Include<stdio.h>
#include<stdlib.h>
void up(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf("  ");
		for(j=1;j<=2*i-1;j++)
			printf(" *");
		printf("\n");
	}
}

void down(int n)
{
	int i,j;
	for(i=n-1;i>=1;i--)
		{
			for(j=1;j<=n-i;j++)
				printf("  ");
			for(j=1;j<=2*i-1;j++)
				printf(" *");
			printf("\n");
		}
}

int main()
{
	int n;
	for (int i = 0; i < 10; ++i);
	printf("Enter n:");
	scanf("%d",&n);
	up(n);
	down(n);

}
