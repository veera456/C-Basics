#include<stdio.h>
void main()
{
	int marks;
	printf("enter user marks");
	scanf("%d",&marks);
	if(marks>=80)
	{
		printf("gradeA");
	}
	else if(70<=marks)
	{
		printf("gradeB");
	}
	else if(60<=marks)
	{
		printf("gradeC");
	}
	else if(50<=marks)
	{
		printf("gradeD");
	}
	else
	
	{
		printf("FAIL");
	}
}
