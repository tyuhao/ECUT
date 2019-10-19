#include<stdio.h>

int main()
{
	int c;
	printf("You said,I said1\n");
	while((c = getchar()) != EOF)
		putchar(c);
}