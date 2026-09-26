#include<stdio.h>
main()
{
	char ch;
	
	printf("\nEnter Your Favorite IPL team name:");
	scanf("%s",&ch);
	
	switch(ch)
	{
		case 'MI':
			
			printf("Go Mumbai Indians!");
			break;
			
		case 'CSK':
			
			printf("Chennai Super Kings for the win!");
			break;
			
		case 'GT':
			
			printf("Gujarat Titans for the win!");
			break;
			
		default:
			
			printf("Team not found");
			break;
	}
}

