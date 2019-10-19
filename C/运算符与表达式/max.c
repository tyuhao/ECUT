#include <stdio.h>
int main()
{
	int max(int age_1,int age_2);
	int age_1,age_2,age_max;

	printf("please input two numbers with the , between them\n");
	scanf("%d,%d",&age_1,&age_2);

	age_max = max(age_1,age_2);
	
	printf("Max is %d\n",age_max );
	return 0;
int max(int x,int y)
{
	int z;
	if (x>y) z = x;
	else z = y;
	return (z);
}