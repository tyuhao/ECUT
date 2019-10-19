#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int i,j;
	int x = 10;
	int y = 5;
	int isFired=0;
	char input;
	int ny=5;
	int isKilled=0;
	scanf("%c",&input);
	
	while(1)
	{
		system("cls");
		if (isKilled==0)
		{
			for (i=0;i<ny;i++)
				printf(" ");
			printf("+\n");	
		}

		if(isFired == 0)
		{
			for (i =0;i<x;i++)
				printf("\n");
		}
		else// 
		{
			for (i =0;i<x;i++)
			{
				for (j =0;j<y;j++)
					printf(" ");
				printf("  |\n");
			}
			if(y+2==ny)
				isKilled=1;
			isFired=0;
		}

		for (j =0;j<y;j++)
			printf(" ");
		printf("  *\n");
		for (j =0;j<y;j++)
			printf(" ");
		printf("*****\n");
		for (j =0;j<y;j++)
			printf(" ");
		printf(" * *\n");
		input=getch();
		if (input=='s')
			x++;
		if (input=='w')
			x--;
		if (input=='a')
			y--;
		if (input=='d')
			y++;
		if (input==' ')
			isFired=1;
	}

	return 0;
}
