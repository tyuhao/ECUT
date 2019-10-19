#include <stdio.h>
main()

{
	int n=0,b=0,x;
	int a;
	printf("输入一个不大于五位的正整数:");
	scanf("%d",&x);
	while(x!=0) {
		n++;
		b=b*10+x%10;
		a=x%10;
		x=x/10;
		printf("第%d位数是:%d\n",n,a);
	}
	printf("输出位数:%d,逆序数为:%d\n",n,b);
}