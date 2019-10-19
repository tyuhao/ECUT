#include <stdio.h>
int main()
{
	int i =5,s=0;
	s = s +(++i) + (++i);
	printf("s=%d\n",s );
}