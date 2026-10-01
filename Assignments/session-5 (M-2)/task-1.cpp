#include<stdio.h>
#include<string.h>
main()
{
	char ch[10];
	
	printf("\nEnter Your Favorite IPL team name:");
	scanf("%s",&ch);
	
	if(strcmp(ch,"MI")==0)
	{			
		printf("Go Mumbai Indians!");
	}
	else if(strcmp(ch,"CSK")==0)
	{
		printf("Chennai Super Kings for the win!");
	}
	else if(strcmp(ch,"GT")==0)
	{
		printf("Gujarat Titans for the win!");
	}
	else
	{
		printf("Team not found");	
	}
}

