#include <stdio.h>
int main()
{
	int a,b,c,d,t;
	t=0;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
		t=(a<c)?a:c;
	
		t=(a<c)?a:c;
	
		t=(a<d)?a:d;
	
		t=(b<c)?b:c;
	
		t=(b<d)?b:d;
	
		t=(c<d)?c:d;
printf("%d<%d<%d<%d\n%d\n",a,b,c,d,t);
}