#include<stdio.h>

void isEligibleForOffer()
{
	int age,price;
	
	printf("\nEnter Your Age:");
	scanf("%d",&age);
	printf("\nEnter Total order value:");
	scanf("%d",&price);
	
	if(18<=age && 500<=price)
	{
		printf("\nYou are Eligible for offer.");
	}
	else
	{
		printf("\nYou are not Eligible for offer.");	
	}	
}

main()
{
	isEligibleForOffer();	
}
