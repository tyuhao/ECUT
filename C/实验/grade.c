/*某歌手大赛，共有10个评委给歌手打分，分数采用百分制，
去掉一个最高分，去掉一个最低分，然后取平均分，得到歌手的成绩。
10个分数由键盘输入，编写程序计算某歌手的成绩。*/
#include <stdio.h>
int max(int x,int y)
{
	int max;
	return max=(x>=y?x:y);
}
int min(int x,int y)
{
	int min;
	return min=x<=y?x:y;
}

main()
{
	
	int i,aver,sum=0,a[10];
	for (i = 0; i < 10; i++)
		scanf("%d",&a[i]);
	int max1=a[0],min1=a[0];
	for (i = 0; i < 10; i++)
	{
		max1=max(max1,a[i]);
		min1=min(min1,a[i]);
		sum=sum+a[i];
	}
	aver=(sum-max1-min1)/8;
	printf("aver=%d\n",aver);
}
工具>编译选项>代码生成优化>连接器>产生调试信息>Yes>确定