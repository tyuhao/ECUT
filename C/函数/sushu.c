/*写一个判断素数的函数，在主函数输入一个整数，输出是否素数的信息。
要求：
（1）函数名为prime，如果是素数，函数返回值为1，如果不是素数，函数返回值为0。
（2）主函数写在prime函数之前，在函数中对其所调用的函数作声明。
（3）以上程序编译运行之后，对程序进行修改，将主函数移到prime函数之后，删除主函数中的函数声明。
（4）保留判别素数的函数，修改主函数，要求实现输出100~200之前的素数。*/
#include <stdio.h>
main()
{
	int n;
	int prime(int n);

	scanf("%d",&n);
	if (prime(n))
		printf("%d是素数\n",n);
	else
		printf("%d不是素数\n",n);

	for(n=100;n<=200;n++)
		if(prime(n))
			printf("%d ",n);
}
int prime(int num)
{
	int flag=1,n;
	for(n=2;n<num/2 && flag == 1;n++)
	if (num%n==0)
	flag=0;
	return(flag);
}
