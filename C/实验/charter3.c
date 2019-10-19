#include <stdio.h>
main( )
{
	
	int sum(int,int y);
	int mpown(int m,int n);

	int x,y;
	scanf("%d%d",&x,&y);
 	printf("sum=%d\n",sum(x,y));
	printf("mpown=%d\n",mpown(x,y));
}


int sum(int a,int b)
{
  return(a+b);
}

int mpown(int m,int n)
{
	
	int i,mpown=1;
	for(i=0;i<n;i++)
	{
		mpown=mpown*m;
	}
	return mpown;
}
