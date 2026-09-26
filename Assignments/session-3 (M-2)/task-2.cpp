#include<stdio.h>
main()
{
	const float gst=18;
	float bp=20000.0;
	float gstamount, finalprice;
	
	printf("Your BasePrice is : %.2f",bp);
	printf("\nYour GST Rate is : %.2f",gst);
	
	gstamount=bp*gst/100;
	printf("\nYour GST Amount is: %.2f",gstamount);
	
	finalprice=bp+gstamount;
	printf("\nYour Final Price is: %.2f",finalprice);
}

