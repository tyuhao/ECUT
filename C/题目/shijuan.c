#include <stdio.h>
int main()
/*{
	int x=23;
	do{printf("%d\n",x-- );}
	while(!x);
}*/
/*
{
	int x=3;
	do{printf("%d  ",x-=2);}
	while(!(--x));
}*/
/*
{
int a=0,i;
for(i=1;i<5;i++)
{
	switch(i)
	{
		case 0: case 3: a+=2;
		case 1: case 2: a+=3;
		default:a+=5;
	}
}
printf("%d\n",a);
}*/
/*
{
	int i=0,a=0;
	while(i<20)
	{
		for(; ;)
		if((i%10)==0) break;
		else i--;
		i+=11;
		a+=i;
	}
	printf("%d\n",a);
}*/
/*{
	int i,sum=-100;
	for(i=1;i<=3;i++) sum+=i;
		printf("%d\n",sum );
}*/
/*
{
	int i,n=0;
	for(i=2;i<5;i++)
	{
		do{
			if(i%3) continue;
			n++;
		}while(!i);
		n++;
	}
	printf("n=%d\n",n );
}*/
/*
{
	int x=1,y=1;
	while(y<=5)
	{
		if(x>=10) break;
		if(x%2==0)
		{x+=5;
		continue;
		}
		x-=3;
		y++;
	}
	printf("%d,%d",x,y);
}*/ 
/*
{
	int a=5;
	while(!(a-->5))
	{
		switch(a)
		{
			case 1:a++;
			case 4:a+=4;
			case 5:a+=5;break;
			default:a-=5;
		}
	 } 
	 printf("%d\n",a);
} */
{
	char ch;
	while((ch=getchar())=='e')
	printf("*");
}
