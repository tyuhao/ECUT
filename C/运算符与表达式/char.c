#include<stdio.h>
int main()
{
	/*char c;
	c = 0363;
	printf("%d\n",c );
	return 0;*/


	//int b=2,c;
	//c=(++b)+(b++);


	/*printf("%d,%o,%x\n",10,10,10 );
	printf("%d,%d,%d\n",10,010,0x10);
	printf("%d,%x\n",012,012);
	printf("%d,%o\n",32767,032767);
	int x = 023;
	printf("%x\n",--x );*/


	/*char ch1,ch2,ch3;
	scanf("%c%c%c",&ch1,&ch2,&ch3);
	printf("%c%c%c%c%c",ch1,'#',ch2,'#',ch3 );*/

	/*int a;
	float b,c;
	scanf("%2d%3f%4f",&a,&b,&c);
	printf("\na=%d,b=%f,c=%f\n",a,b,c );*/

	/*printf("%12.8d\n",12345);
	printf("%12.8s\n","abcdefghij");*/

	/*char ch1,ch2;
	ch1 = getchar();
	ch2 = getchar();
	putchar(ch1);
	putchar(ch2);
	putchar('\n');*/
	/*
	int a=5,b,c;
	b=a+++a+++a++;
	c=(++a)+(++a)+(++a);
	printf("a=%5d  b=%5d\nc=%5d\n",a,b,c);
	*/
	/*
	int a=0,b=0,c=0,d=0;
	if(a=1) {b=1;c=2;}
	else	d=3;
	printf("%d,%d,%d,%d\n",a,b,c,d);*/

	/*int a=1,b=3,c=5,d=4,x;
	if(a<b)
		if(c<d)x=1;
	else if(a<c)
		if(b<d)x=2;
	else x=3;
	else x=6;
	else x=7;
	printf("%d\n",x);*/
	/*
	int a=2,b=-1,c=2;
	if(a<b)
		if(b<0) c=0;
	else c++;
	printf("%d\n",c);*/
	//printf("%d%d%d\n",'\0','\0','\0' );
	/*int a;
	float b,c;
	scanf("%2d%2f%2f",&a,&b,&c);
	printf("a=%d,b=%.1f,c=%.0f\n",a,b,c);*/
	/*char ch1,ch2;
	ch1='A'+'5'-'3';
	ch2='A'+'6'-'3';
	printf("%d,%c\n",ch1,ch2 );*/
	int x=3;
	if((x%2)?printf("**%d\n",x):printf("##%d\n",x));
}