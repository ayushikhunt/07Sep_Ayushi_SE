#include<stdio.h>
main()
{
    char productname[20]="headphone";
	float price=2500;
	double rating=4.5;
	
	printf("Product Name:%c",productname);
	printf("\nData type:String");
	
	printf("\nPrice:%f",price);
	printf("\nData type:Float");
	
	printf("\nRating:%.2lf",rating);
	printf("\nData type:Double");
}

