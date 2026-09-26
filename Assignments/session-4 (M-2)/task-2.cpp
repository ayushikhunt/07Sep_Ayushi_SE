#include<stdio.h>
main()
{
	int price=5000;
	float disc,fp;
	bool isMember=true;
	
	disc=price*10/100;
	fp=price-disc;
	
	if(isMember==true)
	{	
		printf("\nYour Product Price is: %d",price);
		printf("\nDiscount percentage is: %.2f",disc);
		
		disc=price*5/100;
		fp=price-disc;
		printf("\nYou are Member Discount percentage is: %.2f",disc);
	}
	printf("\nYour Final Price is: %.2f",fp);
}
