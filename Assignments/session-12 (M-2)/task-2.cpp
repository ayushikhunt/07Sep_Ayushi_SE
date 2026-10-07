#include<stdio.h>

struct FoodItem
{
	char nm[3][10]={"Pizza","Burger","PavBhaji"};
	float price[3]={250,150,120};
	float rating[10]={4.5,4.2,4.8};
}food;

main()
{
	int i;
	printf("Food Item Details:");
	for(i=0;i<3;i++)
	{
		printf("\n\nItem Name:%s",food.nm[i]);
	
		printf("\nItem Price:%.2f",food.price[i]);

		printf("\nItem Name:%.2f",food.rating[i]);
			
	}	
}
