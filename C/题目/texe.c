#include <stdio.h>
main ()
{
	int date,d,ws,sz;
	int gw=0,sw=0,bw=0,qw=0,ww=0;
	printf("请输入数字：");
	scanf("%d",&date);
	d=date/10;
	if (d>=0 && d<=10000)
	{
		if (d==0)
		{
			ws = 1,sz=date,gw=date;
		}
		else if (d>=1 && d<10)
		{
			ws=2;
			sz=date%10*10+date/10;
			gw=date%10;
			sw=date/10;
		}
		else if (d>=10 && d<100)
		{
			ws=3;
			sz=date%10*100+date/10%10*10+date/100;
			gw=date%10;
			sw=date/10%10;
			bw=date/100;
		}
		else if(d>=100 && d<1000)
		{
			ws=4;
			sz=date%10*1000+date%100/10*100+date%1000/100*10+date/1000;
			gw=date%10;
			sw=date%100/10;
			bw=date%1000/100;
			qw=date/1000;
		}
		else if (d>=1000 && d<10000)
		{
			ws=5;
			sz=date%10*10000+date%100/10*1000+date%1000/100*100+date%10000/1000*10+date/10000;
			gw=date%10;
			sw=date%100/10;
			bw=date%1000/100;
			qw=date%10000/1000;
			ww=date/10000;
		}
		printf("ws=%d\n",ws);
		printf("sz=%d\n",sz);
	}
	else printf("error\n");
	printf("gw=%d,sw=%d,bw=%d,qw=%d,ww=%d\n",gw,sw,bw,qw,ww);
}
/*输入一个不多于5位的正整数，要求：① 求出它是几位数；② 分别打印出每一位数字；③ 按逆序打印出各位数字。
提示：判断位数应使用选择嵌套结构；求每一位数字的程序应放置在嵌套的最里层，需要使用“/”和“％”运算符来取得各个位数，并保存在相应的变量里。
运行程序时要分别输入以下测试数据调试：
1位正整数
2位正整数
3位正整数
4位正整数
5位正整数
除此之外，程序还应当对不合法的输入作必要的处理，如负数或超过5位的正整数。*/