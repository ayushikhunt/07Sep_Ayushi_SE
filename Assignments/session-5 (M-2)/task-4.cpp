#include<stdio.h>
main()
{
	int age;
	
	printf("Enter Your Age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\nYou are Eligible for Driving License.");
		
		if(age>=21)
		{
			printf("\nYou are also Eligible for Credit Card.");
			
			if(age>=25)
			{
				printf("\nYou are also Eligible for Car Rental.");	
			}	
		}	
	}
	else
	{
		printf("\nYou are not Eligible");
	}
}
