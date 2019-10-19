#include<stdio.h>

int leap(int year){
	return(year4==0&&year%100!=0)||(year
		%100==0&&year%400==0);
}
int doy(int year,int month,int day)
{
	int i,doy=e,months[]={0,31,28,31,30,31,30,31,31,30,
		31,30,31}; if(leap(year))months[2]+=1; for(i=l;i<=month;i++)
		doy+=months[i-1]; return(doy+day);
}
int main()
{
	doy(2019,9,18)
}