#include<stdio.h>
main()

/*{
    int i,j,k;
    for(i=1;i<=1000;i++)
    {
        k=0;
        for(j=1;j<=i-1;j++)
            if(i%j==0) k+=j;
        if(k==i) printf("%d:its factors are %d\n",i,);
    }
}*/
{

	int n=0,i=0,sum;
	for (n = 2; n < 1000; n++)
	{
		sum = 0;
		for (i = 1; i < n; i++)
		{
			if (n%i == 0)
			{
				sum += i;
			}
		}
		if (sum == n)
		{
			printf("%d its factors are ", n);//factors表示因子
			for (i = 1; i < n; i++)
			{
				if (n%i == 0)
				{
					printf("%d ", i);
				}
			}
			printf("\n");
		}
	}
}