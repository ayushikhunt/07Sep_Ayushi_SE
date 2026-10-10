#include<stdio.h>
main()
{
	float day[7],total=0,avg;

	for(int i=0;i<7;i++)
	{
		again:
		printf("\nEnter your day[%d] study hours:",i+1);
		scanf("%f",&day[i]);
		if(day[i]<0 || day[i]>24)
		{
			printf("\nInvalid Input, Re Enter your study hours.");
			printf("\n---------------------------------\n");
			goto again;
		}
	}
	printf("\n------Weekly study report------\n");
	for(int i=0;i<7;i++)
	{
		total=total+day[i];	
	}
	printf("\nYour weekly total hours is : %.2f",total);
	
	avg=total/7;
	printf("\nYour Daily study hour average is :%.2f",avg);
	
	float highest=day[0];
    int highestDay=1;

    for(int i=0;i<7;i++)
    {
        if(day[i]>highest)
        {
            highest=day[i];
        	highestDay=i+1;
        }
    }

    printf("\nHighest study day: Day %d",highestDay);
	printf("\n");
	
	for(int i=0;i<7;i++)
	{
		printf("\nDay %d:",i+1);
		for(int j=0;j<day[i];j++) 
		{
			printf("*");
		}
	}
}

