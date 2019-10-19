#include <stdio.h>
int main()
{
	float fahr,celsius;
	int i = 0,times;
	printf("请输入你需要运算的次数\n");
	scanf("%d",&times);
	while (i < times)
	{
		printf("请输入℉℃：");
		scanf("%f",&fahr);

		celsius = 5 * (fahr - 32) / 9;

		printf("%.1f 华氏= %.1f 摄氏", fahr,celsius);
		i++;
	}
}