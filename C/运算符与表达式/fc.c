#include <stdio.h>
int main()
{
	float fahr,celsius;
	int i = 0,times;
	printf("����������Ҫ����Ĵ���\n");
	scanf("%d",&times);
	while (i < times)
	{
		printf("������H�棺");
		scanf("%f",&fahr);

		celsius = 5 * (fahr - 32) / 9;

		printf("%.1f ����= %.1f ����", fahr,celsius);
		i++;
	}
}