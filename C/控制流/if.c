#include <stdio.h>
void grade1()

{
	int grade;
	scanf("%d",&grade);
	if (grade>=90&&grade<=100)
		printf("A\n");
	else if (grade>=80&&grade<90)
		printf("B\n");
	else if (grade>=70&&grade<80)
		printf("C\n");
	else if (grade>=60&&grade<70)
		printf("D\n");
	else printf("E\n");
}

void grade2()
{
	int grade,g;
	scanf("%d",&grade);
	g=grade/10;
	switch(g) {
		case 9:printf("A\n");break;
		case 8:printf("B\n");break;
		case 7:printf("C\n");break;
		case 6:printf("D\n");break;
		default:printf("E\n");
	}
}
main()
{
	//grade1();
	grade2();
}