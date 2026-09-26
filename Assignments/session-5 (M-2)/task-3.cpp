#include<stdio.h>
main()
{
	int i;
	float totaldisc,finalamount;
	
	printf("\nEnter the total cart amount:");
	scanf("%d",&i);
	
	if(i>2000)
	{
		totaldisc=i*20.00/100;
		printf("\nYour Discount is 20%");
	}
	else
	{
		if(i>1000)
		{
			totaldisc=i*10.00/100;
			printf("\nYour Discount is 10%");
		}
		else
		{
			totaldisc=0;
			printf("\nSorry, No Discount");
		}
	}
	
	finalamount=i-totaldisc;
	
	printf("\nYour Final amount to pay is %.2f",finalamount);

}
