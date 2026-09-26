#include<stdio.h>
main()
{
	int ch=0;
	char a[10];
	
	while(ch!=3)
	{
	
		printf("\n\n1.View your favorite 3 IPL team.");
		printf("\n2.Add a new team");
		printf("\n3.exit");
		
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		
			switch(ch)
			{	
					case 1:
						
						printf("\n\nYour Favorite Teams:\n1.CSK\n2.MI\n3.RCB");
						break;
						
					case 2:
						
						printf("\n\nEnter new team name:");
						scanf("%s",&a);
						printf("\nTeam added successfully!");
						break;
					
					case 3:
						
						printf("\nProgram Exited");
						break;
						
					default:
						
						printf("Please, enter right choice.");
						break;
				
			}
	}
}
