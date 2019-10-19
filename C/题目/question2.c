#include <stdio.h>
#include <math.h>

void charter1_T()
{
	#define PI 3.14
	float r,l,s,qs,qv;
	printf("please input r:\n");
	scanf("%f",&r);
	l =2*PI*r;
	s = PI*r*r;
	qs = 4*PI*r*r;
	qv = 4.0/3*PI*r*r*r;
	printf("l=%.2f,s=%.2f,qs=%.2f,qv=%.2f\n",l,s,qs,qv);
}

void charter2_T()
{
	float r,r1,r2,r3;
	printf("please input r1,r2,r3:\n");
	scanf("%f%f%f",&r1,&r2,&r3);
	r=1.0/(1.0/r1+1.0/r2+1.0/r3);
	printf("r= %.2f\n",r);
}

void charter3_T()
{
	float x,y;
	printf("input x:");
	scanf("%f",&x);
	if(x<-1)
		y=x*x*x-1;
	else if (x>=-1 && x<=1)
		y=-3*x+1;
	else if (x>=1 && x<=10)
		y=3*exp(2*x-1)+5;
	else 
		y=5*x+3*log10(2*x*x-1)-13;
	printf("y=%.2f\n",y);
}

void charter4_T()
{
	int year;
	printf("input year:\n");
	scanf("%d",&year);
	if (((year%4==0) && (year%100!=0)) || (year%400==0))
		printf("Yes\n");
	else
		printf("No\n");
}

void charter5_T()
{
	int n=0,a,b=0,c;
	printf("输入一个不多于五位的正整数:");
	scanf("%d",&c);
	while(c!=0) {
		n++;
		b=b*10+c%10;
		a=c%10;
		c=c/10;
		printf("第%d位数是:%d\n",n,a);
	}
	printf("输出位数:%d,逆序数为:%d\n",n,b);
}

void charter6_T()
{
	int c,dx=0,xx=0,spa=0,sz=0,other=0;
	
	while (c!= '\n')
	{
		c=getchar();
		if (c>='A' &&c<='Z')
			++dx;
		else if (c>='a' && c<='z')
			++xx;
		else if (c>='0' &&c<='9')
			++sz;
		else if (c ==' ')
			++spa;
		else ++other;
	} 
	printf("大写：%d\n小写：%d\n空格：%d\n数字：%d\n其它：%d\n",dx,xx,spa,sz,other);
}
main()
{
	//charter1_T();
	//charter2_T();
	//charter3_T();
	//charter4_T();
	//charter5_T();
	charter6_T();
}
