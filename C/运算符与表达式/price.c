#include <stdio.h>
int main()
{
	
	const int AMOUNT = 100;
	int price = 0;
	printf("请输入价格\n");
	scanf("%d",&price);

	int change;
	change = AMOUNT - price;
	printf(" return to you %d yuan\n",change);
	return 0;
}