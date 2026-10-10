#include<stdio.h>
main()
{
	float marks;
	
	printf("Enter student's percentage:");
	scanf("%f",&marks);
	
	if(marks>=0 && marks<=100)
	{
		if(marks>=90)
		{
			printf("Grade:A");
			printf("\nExcellent!");
		}
		else if(marks>=75)
		{
			printf("Grade:B");
			printf("\nGood work! Keep pushing.");
		}
		else if(marks>=60)
		{
			printf("Grade:C");
			printf("\nGood effort! Keep improving.");
		}
		else if(marks>=45)
		{
			printf("Grade:D");
			printf("\nKeep trying!");
		}
		else if(marks>=0)
		{
			printf("Fail");
			printf("\nDon't give up! Work harder.");
		}
	}
	else
	{
		printf("Invalid percentage! Please enter a value between 0 and 100.");
	}
}
