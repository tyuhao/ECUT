#include <stdio.h>
#include <math.h>
main()
{
	int a,b,c,del;
	double x1,x2;
	printf("请输入a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	del = b*b - 4*a*c;
	x1 = (-1.0*b+sqrt(del))/(2.0*a);
	x2 = (-1.0*b-sqrt(del))/(2.0*a);
	printf("x1=%.2f,x2=%.2f\n",x1,x2);
	return 0;
}
