
#include <stdio.h>
int n=1;
void func( )
{
   static int a=2;
   int b=5;
   a+=2;
   b+=5;
   n+=12;
   printf("a=%d,b=%d,n=%d\n",a,b,n);
}
main( )
{
   int a=0,b= -10;
   printf("a=%d,b=%d,n=%d\n",a,b,n);
   func( );
   printf("a=%d,b=%d,n=%d\n",a,b,n);
   func( );
}
