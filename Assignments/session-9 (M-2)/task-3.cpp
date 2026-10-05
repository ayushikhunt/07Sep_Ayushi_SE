#include<stdio.h>
main()
{
	int total=0,avg,order[7]={300,280,150,250,400,340,450};
	
	for(int i=0;i<7;i++)
	{
		total+=order[i];
	}
	printf("Your 7 day order total amount is: %d",total);
	avg=total/7;
	printf("\nYour Average : %d",avg);	
}
